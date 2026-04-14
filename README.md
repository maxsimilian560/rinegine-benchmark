# 🏎️ Rinegine Benchmarks
<!-- Оказывается стили на github не поддерживаются :(
<style>
details {
  background: #0d1117;
  border: 1px solid #30363d;
  border-radius: 8px;
  padding: 0px 25px;
  margin: 12px 0;
  color: #c9d1d9;
  overflow: hidden;
}
details summary {
  color: #ffffff !important;
  font-weight: 500;
  cursor: pointer;
  padding: 8px;
  margin: 0px -20px;
  border-radius: 4px;
  transition: background 0.2s;
}
details::details-content {
  transition: height 1.0s ease-out, content-visibility 1.0s allow-discrete;
  height: 0;
  overflow: hidden;
  content-visibility: hidden;
}

details[open]::details-content {
  height: auto;
  content-visibility: visible;
}
:root {
  interpolate-size: allow-keywords;
}
</style> -->
<details>
<summary>
Rinegine::Kernel::LIST Benchmark
</summary>
<div class="details-content"><div>

> Данный тип временно находится в модуле WIP

Сравнительный бенчмарк связного списка **RG::LIST** против 4 альтернатив:
`std::list`, `std::forward_list`, `boost::list`, `eastl::list`.

## 📊 Результаты

N=500 000 · GCC 15.2.1 `-O3 -march=native` · логарифмическая шкала  
## Подробные результаты с минимальной погрешностью  
![list_full](list/full/chart.svg)

<!-- include: list/full/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.40 ms | 23.33 ms | 23.62 ms | 21.94 ms | 22.05 ms |
| **push_back_mean** | 3.54 ms | 22.27 ms | 21.68 ms | 21.04 ms | 21.85 ms |
| **push_back_median** | 3.40 ms | 23.33 ms | 21.35 ms | 21.43 ms | 22.05 ms |
| **push_back_stddev** | 0.45 ms | 1.86 ms | 1.80 ms | 1.15 ms | 0.58 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.81 ms | 22.24 ms | 22.57 ms | 29.21 ms | 21.90 ms |
| **push_front_mean** | 3.59 ms | 23.16 ms | 23.03 ms | 24.65 ms | 22.20 ms |
| **push_front_median** | 3.81 ms | 23.37 ms | 22.57 ms | 23.36 ms | 21.90 ms |
| **push_front_stddev** | 0.40 ms | 0.84 ms | 0.93 ms | 4.08 ms | 0.59 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.12 ms | 12.05 ms | 11.29 ms | 11.14 ms | 12.92 ms |
| **insert_middle_mean** | 1.15 ms | 10.73 ms | 11.99 ms | 11.08 ms | 13.40 ms |
| **insert_middle_median** | 1.16 ms | 10.91 ms | 12.18 ms | 11.10 ms | 12.92 ms |
| **insert_middle_stddev** | 0.02 ms | 1.42 ms | 0.63 ms | 0.06 ms | 1.83 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.20 ms | 10.76 ms | 11.02 ms | 10.96 ms | 10.19 ms |
| **erase_middle_mean** | 1.32 ms | 10.57 ms | 10.89 ms | 11.01 ms | 10.40 ms |
| **erase_middle_median** | 1.35 ms | 10.76 ms | 10.87 ms | 10.96 ms | 10.19 ms |
| **erase_middle_stddev** | 0.11 ms | 1.32 ms | 0.12 ms | 0.61 ms | 0.43 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.98 ms | 0.92 ms | 1.15 ms | 0.97 ms | 0.93 ms |
| **iterate_mean** | 0.99 ms | 0.97 ms | 1.08 ms | 0.98 ms | 0.95 ms |
| **iterate_median** | 0.98 ms | 0.95 ms | 1.07 ms | 0.97 ms | 0.95 ms |
| **iterate_stddev** | 0.04 ms | 0.05 ms | 0.07 ms | 0.02 ms | 0.02 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 4.27 ms | 27.17 ms | 28.43 ms | 22.85 ms | 17.49 ms |
| **clear_mean** | 3.89 ms | 30.02 ms | 29.57 ms | 23.69 ms | 18.81 ms |
| **clear_median** | 4.27 ms | 30.97 ms | 29.66 ms | 23.97 ms | 18.23 ms |
| **clear_stddev** | 0.71 ms | 2.52 ms | 1.10 ms | 0.74 ms | 1.68 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (3.40 ms) | **boost::list** (21.94 ms) | **eastl::list** (22.05 ms) |
| **push_front** | **RG::LIST** (3.81 ms) | **eastl::list** (21.90 ms) | **std::list** (22.24 ms) |
| **insert_middle** | **RG::LIST** (1.12 ms) | **boost::list** (11.14 ms) | **std::forward_list** (11.29 ms) |
| **erase_middle** | **RG::LIST** (1.20 ms) | **eastl::list** (10.19 ms) | **std::list** (10.76 ms) |
| **iterate** | **std::list** (0.92 ms) | **eastl::list** (0.93 ms) | **boost::list** (0.97 ms) |
| **clear** | **RG::LIST** (4.27 ms) | **eastl::list** (17.49 ms) | **boost::list** (22.85 ms) |

<!-- endinclude -->

## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![list_fast](list/fast/chart.svg)
<!-- include: list/fast/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.77 ms | 8.14 ms | 7.42 ms | 7.70 ms | 7.81 ms |
| **push_front** | 1.75 ms | 8.41 ms | 8.39 ms | 10.06 ms | 9.42 ms |
| **insert_middle** | 0.94 ms | 4.49 ms | 4.16 ms | 4.34 ms | 4.41 ms |
| **erase_middle** | 0.99 ms | 4.49 ms | 5.11 ms | 5.61 ms | 5.65 ms |
| **iterate** | 0.90 ms | 1.30 ms | 1.82 ms | 1.49 ms | 1.28 ms |
| **clear** | 1.72 ms | 8.10 ms | 7.41 ms | 7.81 ms | 7.85 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.77 ms) | **std::forward_list** (7.42 ms) | **boost::list** (7.70 ms) |
| **push_front** | **RG::LIST** (1.75 ms) | **std::forward_list** (8.39 ms) | **std::list** (8.41 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **std::forward_list** (4.16 ms) | **boost::list** (4.34 ms) |
| **erase_middle** | **RG::LIST** (0.99 ms) | **std::list** (4.49 ms) | **std::forward_list** (5.11 ms) |
| **iterate** | **RG::LIST** (0.90 ms) | **eastl::list** (1.28 ms) | **std::list** (1.30 ms) |
| **clear** | **RG::LIST** (1.72 ms) | **std::forward_list** (7.41 ms) | **boost::list** (7.81 ms) |

<!-- endinclude -->


## 🛠 Сборка и запуск

### Зависимости (Arch Linux)

```bash
sudo pacman -S boost 
yay -S eastl benchmark-git  # (Из AUR) Google Benchmark
```

### Сборка

```bash
../Rinegine/bin/rgcmd
sh ./list/full/run.sh # для подробных результатов с уменьшением влияния нагрузки на систему и редактированием README.md
sh ./list/fast/run.sh # для быстрого бенчмарка с обычным влиянием нагрузки системы на результаты и редактированием README.md
sh ./run.sh # для запуска двух бенчмарков подряд README.md
./benchmark_runner --benchmark_min_time=500ms # быстрый бенчмарк в терминале
```

### Фильтрация

```bash
./benchmark_runner --benchmark_filter="RG::LIST/.*"
./benchmark_runner --benchmark_filter="push_front"
```

</div></div>
</details>
