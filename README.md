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
| **push_back** | 1.79 ms | 8.04 ms | 7.26 ms | 7.44 ms | 7.51 ms |
| **push_back_mean** | 1.80 ms | 8.11 ms | 7.30 ms | 7.52 ms | 7.61 ms |
| **push_back_median** | 1.80 ms | 8.09 ms | 7.31 ms | 7.49 ms | 7.52 ms |
| **push_back_stddev** | 0.01 ms | 0.08 ms | 0.04 ms | 0.09 ms | 0.17 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.78 ms | 8.13 ms | 7.37 ms | 7.94 ms | 7.91 ms |
| **push_front_mean** | 1.80 ms | 8.60 ms | 7.35 ms | 8.17 ms | 8.12 ms |
| **push_front_median** | 1.79 ms | 8.42 ms | 7.36 ms | 8.11 ms | 8.11 ms |
| **push_front_stddev** | 0.02 ms | 0.59 ms | 0.02 ms | 0.28 ms | 0.21 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.95 ms | 4.39 ms | 4.15 ms | 4.12 ms | 4.16 ms |
| **insert_middle_mean** | 0.95 ms | 4.47 ms | 4.10 ms | 4.12 ms | 4.18 ms |
| **insert_middle_median** | 0.95 ms | 4.48 ms | 4.11 ms | 4.12 ms | 4.19 ms |
| **insert_middle_stddev** | 0.00 ms | 0.07 ms | 0.06 ms | 0.00 ms | 0.02 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.97 ms | 4.37 ms | 4.35 ms | 4.04 ms | 4.10 ms |
| **erase_middle_mean** | 0.96 ms | 4.48 ms | 5.05 ms | 4.04 ms | 4.12 ms |
| **erase_middle_median** | 0.96 ms | 4.53 ms | 4.97 ms | 4.04 ms | 4.14 ms |
| **erase_middle_stddev** | 0.01 ms | 0.10 ms | 0.74 ms | 0.00 ms | 0.02 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.96 ms | 0.92 ms | 0.95 ms | 0.91 ms | 0.94 ms |
| **iterate_mean** | 0.95 ms | 1.33 ms | 1.22 ms | 1.32 ms | 1.34 ms |
| **iterate_median** | 0.96 ms | 1.50 ms | 0.97 ms | 1.49 ms | 1.50 ms |
| **iterate_stddev** | 0.01 ms | 0.36 ms | 0.45 ms | 0.36 ms | 0.35 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.73 ms | 8.12 ms | 7.34 ms | 7.42 ms | 7.61 ms |
| **clear_mean** | 1.74 ms | 8.11 ms | 7.26 ms | 7.41 ms | 7.61 ms |
| **clear_median** | 1.74 ms | 8.12 ms | 7.24 ms | 7.41 ms | 7.61 ms |
| **clear_stddev** | 0.00 ms | 0.01 ms | 0.07 ms | 0.01 ms | 0.01 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.79 ms) | **std::forward_list** (7.26 ms) | **boost::list** (7.44 ms) |
| **push_front** | **RG::LIST** (1.78 ms) | **std::forward_list** (7.37 ms) | **eastl::list** (7.91 ms) |
| **insert_middle** | **RG::LIST** (0.95 ms) | **boost::list** (4.12 ms) | **std::forward_list** (4.15 ms) |
| **erase_middle** | **RG::LIST** (0.97 ms) | **boost::list** (4.04 ms) | **eastl::list** (4.10 ms) |
| **iterate** | **boost::list** (0.91 ms) | **std::list** (0.92 ms) | **eastl::list** (0.94 ms) |
| **clear** | **RG::LIST** (1.73 ms) | **std::forward_list** (7.34 ms) | **boost::list** (7.42 ms) |

<!-- endinclude -->

## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![list_fast](list/fast/chart.svg)
<!-- include: list/fast/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.84 ms | 8.17 ms | 7.33 ms | 7.59 ms | 7.70 ms |
| **push_front** | 1.75 ms | 8.32 ms | 8.20 ms | 8.42 ms | 8.23 ms |
| **insert_middle** | 0.95 ms | 4.48 ms | 4.16 ms | 4.29 ms | 4.38 ms |
| **erase_middle** | 0.96 ms | 4.48 ms | 5.06 ms | 5.52 ms | 5.61 ms |
| **iterate** | 0.96 ms | 1.19 ms | 1.38 ms | 1.12 ms | 1.10 ms |
| **clear** | 1.76 ms | 8.08 ms | 7.53 ms | 7.49 ms | 7.84 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.84 ms) | **std::forward_list** (7.33 ms) | **boost::list** (7.59 ms) |
| **push_front** | **RG::LIST** (1.75 ms) | **std::forward_list** (8.20 ms) | **eastl::list** (8.23 ms) |
| **insert_middle** | **RG::LIST** (0.95 ms) | **std::forward_list** (4.16 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::LIST** (0.96 ms) | **std::list** (4.48 ms) | **std::forward_list** (5.06 ms) |
| **iterate** | **RG::LIST** (0.96 ms) | **eastl::list** (1.10 ms) | **boost::list** (1.12 ms) |
| **clear** | **RG::LIST** (1.76 ms) | **boost::list** (7.49 ms) | **std::forward_list** (7.53 ms) |

<!-- endinclude -->


## 🛠 Сборка и запуск

### Зависимости (Arch Linux)

```bash
sudo pacman -S boost 
yay -S eastl benchmark-git  # (Из AUR) Google Benchmark
```

### Сборка и запуск

```bash
../Rinegine/bin/rgcmd
sh ./list/full/run.sh # для подробных результатов с уменьшением влияния нагрузки системы на результаты и редактированием README.md
sh ./list/fast/run.sh # для быстрого бенчмарка с обычным влиянием нагрузки системы на результаты и редактированием README.md
sh ./run.sh # для запуска двух бенчмарков подряд с редактированием README.md
./benchmark_runner --help # помощь по командам
./benchmark_runner # быстрый бенчмарк в терминале
```

### Фильтрация

```bash
./benchmark_runner --benchmark_filter="RG::LIST/.*"
./benchmark_runner --benchmark_filter="push_front"
```

</div></div>
</details>
