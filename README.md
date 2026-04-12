# 🏎️ Rinegine::Kernel::LIST Benchmark
> Данный тип временно находится в модуле WIP  

Сравнительный бенчмарк связного списка **RG::LIST** против 4 альтернатив:
`std::list`, `std::forward_list`, `boost::list`, `eastl::list`.

## 📊 Результаты

N=500 000 · GCC 15.2.1 `-O3 -march=native` · логарифмическая шкала  
## Подробные результаты с минимальной погрешностью  
![benchmark](chart.svg)

<!-- include: RESULTS.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.00 ms | 22.45 ms | 20.53 ms | 12.41 ms | 10.78 ms |
| **push_back_mean** | 2.94 ms | 23.03 ms | 20.58 ms | 12.28 ms | 11.08 ms |
| **push_back_median** | 2.91 ms | 22.75 ms | 20.53 ms | 12.32 ms | 10.78 ms |
| **push_back_stddev** | 0.06 ms | 0.76 ms | 0.12 ms | 0.15 ms | 0.57 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.84 ms | 12.74 ms | 11.24 ms | 11.60 ms | 11.31 ms |
| **push_front_mean** | 1.86 ms | 12.84 ms | 11.23 ms | 11.51 ms | 11.29 ms |
| **push_front_median** | 1.84 ms | 12.86 ms | 11.24 ms | 11.60 ms | 11.31 ms |
| **push_front_stddev** | 0.02 ms | 0.08 ms | 0.10 ms | 0.20 ms | 0.04 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.68 ms | 6.71 ms | 5.83 ms | 5.91 ms | 5.24 ms |
| **insert_middle_mean** | 0.70 ms | 6.63 ms | 5.92 ms | 5.89 ms | 5.29 ms |
| **insert_middle_median** | 0.70 ms | 6.66 ms | 5.96 ms | 5.91 ms | 5.31 ms |
| **insert_middle_stddev** | 0.02 ms | 0.11 ms | 0.09 ms | 0.03 ms | 0.05 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.66 ms | 6.23 ms | 5.73 ms | 5.64 ms | 5.18 ms |
| **erase_middle_mean** | 0.66 ms | 6.39 ms | 5.71 ms | 5.63 ms | 5.21 ms |
| **erase_middle_median** | 0.66 ms | 6.36 ms | 5.72 ms | 5.64 ms | 5.20 ms |
| **erase_middle_stddev** | 0.01 ms | 0.17 ms | 0.03 ms | 0.03 ms | 0.03 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.80 ms | 0.79 ms | 0.85 ms | 0.84 ms | 0.77 ms |
| **iterate_mean** | 0.83 ms | 0.78 ms | 0.82 ms | 0.84 ms | 0.78 ms |
| **iterate_median** | 0.83 ms | 0.78 ms | 0.81 ms | 0.84 ms | 0.78 ms |
| **iterate_stddev** | 0.02 ms | 0.01 ms | 0.03 ms | 0.01 ms | 0.01 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.95 ms | 13.01 ms | 10.86 ms | 10.92 ms | 10.20 ms |
| **clear_mean** | 1.83 ms | 13.29 ms | 11.01 ms | 10.95 ms | 10.19 ms |
| **clear_median** | 1.78 ms | 13.07 ms | 10.86 ms | 10.92 ms | 10.18 ms |
| **clear_stddev** | 0.10 ms | 0.43 ms | 0.28 ms | 0.07 ms | 0.01 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (3.00 ms) | **eastl::list** (10.78 ms) | **boost::list** (12.41 ms) |
| **push_front** | **RG::LIST** (1.84 ms) | **std::forward_list** (11.24 ms) | **eastl::list** (11.31 ms) |
| **insert_middle** | **RG::LIST** (0.68 ms) | **eastl::list** (5.24 ms) | **std::forward_list** (5.83 ms) |
| **erase_middle** | **RG::LIST** (0.66 ms) | **eastl::list** (5.18 ms) | **boost::list** (5.64 ms) |
| **iterate** | **eastl::list** (0.77 ms) | **std::list** (0.79 ms) | **RG::LIST** (0.80 ms) |
| **clear** | **RG::LIST** (1.95 ms) | **eastl::list** (10.20 ms) | **std::forward_list** (10.86 ms) |

<!-- endinclude -->

## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![benchmark2](chart2.svg)
<!-- include: RESULTS2.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.76 ms | 12.28 ms | 11.68 ms | 11.65 ms | 10.50 ms |
| **push_front** | 2.01 ms | 12.59 ms | 10.94 ms | 10.99 ms | 10.22 ms |
| **insert_middle** | 0.65 ms | 6.16 ms | 5.77 ms | 5.72 ms | 5.19 ms |
| **erase_middle** | 0.64 ms | 6.10 ms | 5.65 ms | 5.64 ms | 5.31 ms |
| **iterate** | 0.78 ms | 0.80 ms | 0.78 ms | 0.79 ms | 0.80 ms |
| **clear** | 1.84 ms | 12.16 ms | 11.49 ms | 11.07 ms | 10.43 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.76 ms) | **eastl::list** (10.50 ms) | **boost::list** (11.65 ms) |
| **push_front** | **RG::LIST** (2.01 ms) | **eastl::list** (10.22 ms) | **std::forward_list** (10.94 ms) |
| **insert_middle** | **RG::LIST** (0.65 ms) | **eastl::list** (5.19 ms) | **boost::list** (5.72 ms) |
| **erase_middle** | **RG::LIST** (0.64 ms) | **eastl::list** (5.31 ms) | **boost::list** (5.64 ms) |
| **iterate** | **std::forward_list** (0.78 ms) | **RG::LIST** (0.78 ms) | **boost::list** (0.79 ms) |
| **clear** | **RG::LIST** (1.84 ms) | **eastl::list** (10.43 ms) | **boost::list** (11.07 ms) |

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
sh ./run_bench.sh # для подробных результатов с уменьшением влияния нагрузки на систему и редактированием README.md
sh ./update_result.sh # для быстрого бенчмарка с обычным влиянием нагрузки системы на результаты и редактированием README.md
./benchmark_runner --benchmark_min_time=500ms # быстрый бенчмарк в терминале
```

### Фильтрация

```bash
./benchmark_runner --benchmark_filter="RG::LIST/.*"
./benchmark_runner --benchmark_filter="push_front"
```