#!/usr/bin/env python3
"""Update README.md with latest benchmark table and chart image."""
import sys

def main():
    if len(sys.argv) < 4:
        print(f"Usage: {sys.argv[0]} <RESULTS.md> <chart.svg> <README.md>")
        sys.exit(1)

    results_path = sys.argv[1]
    chart_path = sys.argv[2]
    readme_path = sys.argv[3]

    with open(results_path) as f:
        table = f.read().strip()

    with open(readme_path) as f:
        readme = f.read()

    # Replace table between markers
    start = readme.find("<!-- ТАБЛИЦА -->")
    end = readme.find("<!-- КОНЕЦ ТАБЛИЦЫ -->")
    if start != -1 and end != -1:
        before = readme[:start + len("<!-- ТАБЛИЦА -->")]
        after = readme[end:]
        readme = before + "\n" + table + "\n" + after

    # Replace chart image ref (just keep the markdown image line)
    img_start = readme.find("<!-- БАРНИК -->")
    img_end = readme.find("<!-- КОНЕЦ БАРНИКА -->")
    if img_start != -1 and img_end != -1:
        before = readme[:img_start + len("<!-- БАРНИК -->")]
        after = readme[img_end:]
        readme = before + "\n![benchmark](chart.svg)\n" + after

    with open(readme_path, "w") as f:
        f.write(readme)

    print(f"✅ README.md updated")

if __name__ == "__main__":
    main()
