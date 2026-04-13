#!/usr/bin/env python3
"""Generate a beautiful SVG line chart from Google Benchmark JSON."""
import json, sys, math, os

# Fix Unicode encoding on Windows console
if sys.platform == 'win32':
    sys.stdout.reconfigure(encoding='utf-8')

def main():
    if len(sys.argv) < 4:
        print(f"Usage: {sys.argv[0]} <input.json> <RESULTS.md> <chart.svg>")
        sys.exit(1)

    json_path, md_path, svg_path = sys.argv[1], sys.argv[2], sys.argv[3]

    with open(json_path) as f:
        data = json.load(f)

    benchmarks = data.get("benchmarks", [])
    context = data.get("context", {})

    # Group: {op: {lib: time_ms}}
    ops = {}
    for b in benchmarks:
        name = b["name"]
        if "/" in name:
            lib, op = name.split("/", 1)
        else:
            lib = op = name
        ops.setdefault(op, {})[lib] = b.get("real_time", 0) / 1e6

    op_labels = list(ops.keys())
    libs = ["RG::LIST", "std::list", "std::forward_list", "boost::list", "eastl::list"]
    lib_colors = {
        "RG::LIST":        "#58a6ff",
        "std::list":       "#FF9800",
        "std::forward_list": "#4CAF50",
        "boost::list":     "#BB86FC",
        "eastl::list":     "#F472B6",
    }

    # ── Markdown table ────────────────────────────────────
    header = "| Operation | " + " | ".join(libs) + " |"
    sep = "|---" + "|---" * len(libs) + "|"
    lines = [header, sep]
    for op in op_labels:
        row = [f"**{op}**"]
        for lib in libs:
            v = ops[op].get(lib)
            row.append(f"{v:.2f} ms" if v else "—")
        lines.append("| " + " | ".join(row) + " |")

    # ── Leaders table ─────────────────────────────────────
    lines.append("")
    lines.append("### 🏆 Лидеры по операциям")
    lines.append("")

    # Only use base operations (no _mean, _median, _stddev, _cv)
    base_ops = [op for op in op_labels if not any(op.endswith(s) for s in ("_mean", "_median", "_stddev", "_cv"))]

    header = "| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |"
    lines.append(header)
    lines.append("|---|---|---|---|")

    for op in base_ops:
        # Collect all lib times for this operation, sorted ascending (faster = better)
        sorted_libs = sorted(
            [(lib, ops[op].get(lib)) for lib in libs if ops[op].get(lib)],
            key=lambda x: x[1]
        )
        row = [f"**{op}**"]
        for lib, t in sorted_libs[:3]:
            row.append(f"**{lib}** ({t:.2f} ms)")
        # Pad if less than 3
        while len(row) < 4:
            row.append("—")
        lines.append("| " + " | ".join(row) + " |")

    lines.append("")

    with open(md_path, "w", encoding='utf-8') as f:
        f.write("\n".join(lines) + "\n")

    # ── SVG line chart ────────────────────────────────────
    W, H = 960, 500
    PAD = dict(top=55, right=15, bottom=70, left=55)
    legend_h = 30
    title_h = 30

    n_ops = len(op_labels)
    chart_h = H - PAD["top"] - PAD["bottom"] - legend_h - title_h

    def x_pos(i):
        return PAD["left"] + (i + 0.5) * (W - PAD["left"] - PAD["right"]) / n_ops

    def y_pos(v, y_start, ch, lo, hi):
        if v is None or v <= 0:
            return None
        t = (math.log10(v) - lo) / (hi - lo)
        return y_start + ch * (1 - t)

    # Scale
    all_vals = [ops[op].get(lib) for op in op_labels for lib in libs if ops[op].get(lib)]
    lo = math.log10(min(all_vals) * 0.7)
    hi = math.log10(max(all_vals) * 1.5)

    chart_y = PAD["top"] + legend_h + title_h
    cw = W - PAD["left"] - PAD["right"]

    def grid_lines(lo, hi, y_start, ch):
        result = []
        for p in range(int(math.floor(lo)), int(math.ceil(hi)) + 1):
            base = 10 ** p
            # Subdivisions: only 1, 2, 5 per decade (not all 1-9)
            for mult in [1, 2, 5]:
                v = base * mult
                if v <= 0:
                    continue
                y = y_pos(v, y_start, ch, lo, hi)
                if y_start <= y <= y_start + ch:
                    if v >= 1000:
                        lbl = f"{v/1000:.0f}s"
                    elif v >= 1:
                        lbl = f"{v:.0f}ms"
                    else:
                        lbl = f"{v*1000:.0f}µs"
                    result.append((y, lbl))
        return result

    # Build SVG
    s = []
    s.append(f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {W} {H}" font-family="-apple-system,BlinkMacSystemFont,Segoe UI,sans-serif">')
    s.append(f'<rect width="{W}" height="{H}" rx="10" fill="#0d1117"/>')
    s.append(f'<rect x="{PAD["left"]}" y="{chart_y}" width="{cw}" height="{chart_h}" fill="#161b22" rx="4"/>')

    # Grid + Y labels
    for y, lbl in grid_lines(lo, hi, chart_y, chart_h):
        s.append(f'<line x1="{PAD["left"]}" y1="{y:.1f}" x2="{PAD["left"]+cw}" y2="{y:.1f}" stroke="#21262d"/>')
        s.append(f'<text x="{PAD["left"]-8}" y="{y+4}" text-anchor="end" fill="#484f58" font-size="10">{lbl}</text>')

    # Vertical dividers
    group_w = cw / n_ops
    for i in range(1, n_ops):
        x = PAD["left"] + i * group_w
        s.append(f'<line x1="{x:.1f}" y1="{chart_y}" x2="{x:.1f}" y2="{chart_y + chart_h}" stroke="#30363d" stroke-width="1" stroke-dasharray="4,4"/>')

    # Draw lines
    def draw_lines():
        for lib in libs:
            color = lib_colors[lib]
            pts = []
            for i, op in enumerate(op_labels):
                v = ops[op].get(lib)
                x = x_pos(i)
                y = y_pos(v, chart_y, chart_h, lo, hi)
                if y is not None:
                    pts.append((i, x, y))

            # Break at missing values
            segments = []
            seg = []
            for idx, px, py in pts:
                if not seg or idx - seg[-1][0] == 1:
                    seg.append((idx, px, py))
                else:
                    if len(seg) > 1:
                        segments.append(seg)
                    seg = [(idx, px, py)]
            if len(seg) > 1:
                segments.append(seg)

            for seg in segments:
                path_d = " ".join(f"L{px:.1f},{py:.1f}" for _, px, py in seg)
                path_d = "M" + path_d[1:]
                s.append(f'<path d="{path_d}" fill="none" stroke="{color}" stroke-width="8" stroke-linejoin="round" stroke-linecap="round" opacity="0.12"/>')
                s.append(f'<path d="{path_d}" fill="none" stroke="{color}" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round"/>')

            for _, px, py in pts:
                s.append(f'<circle cx="{px:.1f}" cy="{py:.1f}" r="6" fill="{color}" opacity="0.2"/>')
                s.append(f'<circle cx="{px:.1f}" cy="{py:.1f}" r="4" fill="{color}" stroke="#0d1117" stroke-width="2.5"/>')

    draw_lines()

    # X labels
    for i, op in enumerate(op_labels):
        x = x_pos(i)
        y = chart_y + chart_h + 18
        s.append(f'<text x="{x:.1f}" y="{y}" text-anchor="end" fill="#8b949e" font-size="11" transform="rotate(-30,{x:.1f},{y})">{op}</text>')

    # Y axis label
    s.append(f'<text x="14" y="{chart_y + chart_h/2}" text-anchor="middle" fill="#484f58" font-size="11" transform="rotate(-90,14,{chart_y + chart_h/2})">Time (ms)</text>')

    # Legend
    lx = PAD["left"] + 10
    ly = PAD["top"] + 14
    for j, lib in enumerate(libs):
        cx = lx + j * 155
        s.append(f'<circle cx="{cx}" cy="{ly}" r="5" fill="{lib_colors[lib]}"/>')
        s.append(f'<text x="{cx+10}" y="{ly+4}" fill="#c9d1d9" font-size="12">{lib}</text>')

    # Title
    date_str = context.get("date", "unknown")[:10]
    s.append(f'<text x="{W/2}" y="20" text-anchor="middle" fill="#58a6ff" font-size="15" font-weight="700">RG::LIST Benchmark — {date_str}</text>')

    s.append('</svg>')

    with open(svg_path, "w") as f:
        f.write("\n".join(s))

    # ── Update README.md with results table ───────────────
    readme_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), "README.md")
    try:
        with open(readme_path, encoding='utf-8-sig') as f:
            readme = f.read()

        table_content = "\n".join(lines) + "\n"
        import re
        marker = f"<!-- include: {md_path} -->"
        print(f"Looking for marker: {marker}")
        pattern = rf'({re.escape(marker)}\n?)[\s\S]*?(<!-- endinclude -->)'
        replacement = r'\1' + table_content + r'\2'
        new_readme = re.sub(pattern, replacement, readme)
        if new_readme == readme:
            print(f"  ℹ No changes needed — data already up to date")
        else:
            with open(readme_path, "w", encoding='utf-8') as f:
                f.write(new_readme)
            print(f"✅ README.md updated")
    except Exception as e:
        print(f"⚠ Could not update README.md: {e}")
        
    print(f"✅ {md_path} + {svg_path} generated")

if __name__ == "__main__":
    main()
