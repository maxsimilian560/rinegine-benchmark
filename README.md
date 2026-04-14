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
| **push_back** | 1.78 ms | 8.23 ms | 8.47 ms | 7.60 ms | 7.85 ms |
| **push_back_mean** | 1.79 ms | 8.28 ms | 8.34 ms | 7.65 ms | 7.92 ms |
| **push_back_median** | 1.79 ms | 8.24 ms | 8.30 ms | 7.63 ms | 7.89 ms |
| **push_back_stddev** | 0.01 ms | 0.08 ms | 0.11 ms | 0.06 ms | 0.09 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.76 ms | 8.52 ms | 8.02 ms | 8.27 ms | 8.29 ms |
| **push_front_mean** | 1.75 ms | 8.68 ms | 8.00 ms | 8.39 ms | 8.65 ms |
| **push_front_median** | 1.76 ms | 8.70 ms | 8.01 ms | 8.33 ms | 8.46 ms |
| **push_front_stddev** | 0.01 ms | 0.15 ms | 0.02 ms | 0.16 ms | 0.48 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.94 ms | 4.47 ms | 4.43 ms | 4.16 ms | 4.25 ms |
| **insert_middle_mean** | 0.94 ms | 4.56 ms | 4.41 ms | 4.18 ms | 4.26 ms |
| **insert_middle_median** | 0.94 ms | 4.59 ms | 4.40 ms | 4.19 ms | 4.26 ms |
| **insert_middle_stddev** | 0.00 ms | 0.08 ms | 0.03 ms | 0.01 ms | 0.01 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.95 ms | 4.38 ms | 4.64 ms | 4.08 ms | 4.18 ms |
| **erase_middle_mean** | 0.96 ms | 4.47 ms | 5.23 ms | 4.06 ms | 4.19 ms |
| **erase_middle_median** | 0.95 ms | 4.49 ms | 5.21 ms | 4.06 ms | 4.19 ms |
| **erase_middle_stddev** | 0.01 ms | 0.09 ms | 0.60 ms | 0.01 ms | 0.01 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.91 ms | 0.90 ms | 0.95 ms | 0.90 ms | 0.90 ms |
| **iterate_mean** | 0.94 ms | 1.17 ms | 1.20 ms | 1.18 ms | 1.18 ms |
| **iterate_median** | 0.95 ms | 1.22 ms | 0.95 ms | 1.24 ms | 1.23 ms |
| **iterate_stddev** | 0.02 ms | 0.25 ms | 0.44 ms | 0.26 ms | 0.26 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.73 ms | 8.24 ms | 8.18 ms | 7.60 ms | 7.86 ms |
| **clear_mean** | 1.75 ms | 8.23 ms | 8.31 ms | 7.58 ms | 7.96 ms |
| **clear_median** | 1.76 ms | 8.22 ms | 8.32 ms | 7.59 ms | 7.86 ms |
| **clear_stddev** | 0.02 ms | 0.01 ms | 0.13 ms | 0.04 ms | 0.17 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.78 ms) | **boost::list** (7.60 ms) | **eastl::list** (7.85 ms) |
| **push_front** | **RG::LIST** (1.76 ms) | **std::forward_list** (8.02 ms) | **boost::list** (8.27 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **boost::list** (4.16 ms) | **eastl::list** (4.25 ms) |
| **erase_middle** | **RG::LIST** (0.95 ms) | **boost::list** (4.08 ms) | **eastl::list** (4.18 ms) |
| **iterate** | **eastl::list** (0.90 ms) | **boost::list** (0.90 ms) | **std::list** (0.90 ms) |
| **clear** | **RG::LIST** (1.73 ms) | **boost::list** (7.60 ms) | **eastl::list** (7.86 ms) |

<!-- endinclude -->

## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![list_fast](list/fast/chart.svg)
<!-- include: list/fast/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.79 ms | 8.16 ms | 7.67 ms | 7.90 ms | 7.78 ms |
| **push_front** | 1.74 ms | 8.52 ms | 8.30 ms | 10.20 ms | 9.45 ms |
| **insert_middle** | 0.94 ms | 4.47 ms | 4.34 ms | 4.33 ms | 4.37 ms |
| **erase_middle** | 0.99 ms | 4.53 ms | 5.11 ms | 5.55 ms | 5.60 ms |
| **iterate** | 0.90 ms | 1.18 ms | 1.36 ms | 1.12 ms | 1.10 ms |
| **clear** | 1.77 ms | 8.08 ms | 7.68 ms | 8.05 ms | 7.83 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.79 ms) | **std::forward_list** (7.67 ms) | **eastl::list** (7.78 ms) |
| **push_front** | **RG::LIST** (1.74 ms) | **std::forward_list** (8.30 ms) | **std::list** (8.52 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **boost::list** (4.33 ms) | **std::forward_list** (4.34 ms) |
| **erase_middle** | **RG::LIST** (0.99 ms) | **std::list** (4.53 ms) | **std::forward_list** (5.11 ms) |
| **iterate** | **RG::LIST** (0.90 ms) | **eastl::list** (1.10 ms) | **boost::list** (1.12 ms) |
| **clear** | **RG::LIST** (1.77 ms) | **std::forward_list** (7.68 ms) | **eastl::list** (7.83 ms) |

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
