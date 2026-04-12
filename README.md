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
| **push_back** | 1.80 ms | 10.84 ms | 8.98 ms | 9.02 ms | 9.20 ms |
| **push_back_mean** | 1.80 ms | 10.53 ms | 9.05 ms | 9.25 ms | 9.55 ms |
| **push_back_median** | 1.80 ms | 10.42 ms | 8.98 ms | 9.35 ms | 9.71 ms |
| **push_back_stddev** | 0.01 ms | 0.27 ms | 0.15 ms | 0.19 ms | 0.30 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.84 ms | 11.07 ms | 10.76 ms | 9.46 ms | 9.83 ms |
| **push_front_mean** | 1.81 ms | 11.10 ms | 10.58 ms | 10.01 ms | 9.96 ms |
| **push_front_median** | 1.80 ms | 11.07 ms | 10.76 ms | 9.75 ms | 9.83 ms |
| **push_front_stddev** | 0.02 ms | 0.30 ms | 0.38 ms | 0.73 ms | 0.55 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.87 ms | 5.53 ms | 4.76 ms | 4.83 ms | 5.17 ms |
| **insert_middle_mean** | 0.87 ms | 5.47 ms | 4.89 ms | 4.82 ms | 5.07 ms |
| **insert_middle_median** | 0.87 ms | 5.52 ms | 4.92 ms | 4.83 ms | 5.04 ms |
| **insert_middle_stddev** | 0.00 ms | 0.08 ms | 0.11 ms | 0.04 ms | 0.09 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.89 ms | 5.41 ms | 5.21 ms | 4.70 ms | 4.90 ms |
| **erase_middle_mean** | 0.89 ms | 5.39 ms | 5.40 ms | 4.71 ms | 5.04 ms |
| **erase_middle_median** | 0.89 ms | 5.41 ms | 5.21 ms | 4.71 ms | 5.11 ms |
| **erase_middle_stddev** | 0.00 ms | 0.17 ms | 0.36 ms | 0.02 ms | 0.12 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.74 ms | 0.73 ms | 0.74 ms | 0.81 ms | 0.73 ms |
| **iterate_mean** | 0.74 ms | 0.74 ms | 0.75 ms | 0.81 ms | 0.74 ms |
| **iterate_median** | 0.74 ms | 0.73 ms | 0.74 ms | 0.81 ms | 0.73 ms |
| **iterate_stddev** | 0.00 ms | 0.02 ms | 0.03 ms | 0.01 ms | 0.02 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.86 ms | 10.39 ms | 8.89 ms | 8.94 ms | 9.73 ms |
| **clear_mean** | 1.86 ms | 10.35 ms | 9.05 ms | 8.97 ms | 9.66 ms |
| **clear_median** | 1.86 ms | 10.36 ms | 9.01 ms | 8.94 ms | 9.73 ms |
| **clear_stddev** | 0.00 ms | 0.05 ms | 0.19 ms | 0.15 ms | 0.26 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.80 ms) | **std::forward_list** (8.98 ms) | **boost::list** (9.02 ms) |
| **push_front** | **RG::LIST** (1.84 ms) | **boost::list** (9.46 ms) | **eastl::list** (9.83 ms) |
| **insert_middle** | **RG::LIST** (0.87 ms) | **std::forward_list** (4.76 ms) | **boost::list** (4.83 ms) |
| **erase_middle** | **RG::LIST** (0.89 ms) | **boost::list** (4.70 ms) | **eastl::list** (4.90 ms) |
| **iterate** | **std::list** (0.73 ms) | **eastl::list** (0.73 ms) | **RG::LIST** (0.74 ms) |
| **clear** | **RG::LIST** (1.86 ms) | **std::forward_list** (8.89 ms) | **boost::list** (8.94 ms) |

<!-- endinclude -->

## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![benchmark2](chart2.svg)
<!-- include: RESULTS2.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.80 ms | 10.20 ms | 9.17 ms | 8.93 ms | 9.46 ms |
| **push_front** | 1.80 ms | 11.18 ms | 10.87 ms | 13.14 ms | 13.76 ms |
| **insert_middle** | 0.89 ms | 5.23 ms | 4.49 ms | 4.67 ms | 4.75 ms |
| **erase_middle** | 0.89 ms | 5.14 ms | 5.17 ms | 5.89 ms | 6.33 ms |
| **iterate** | 0.74 ms | 0.88 ms | 0.88 ms | 2.27 ms | 1.08 ms |
| **clear** | 1.86 ms | 10.48 ms | 9.02 ms | 9.09 ms | 9.78 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.80 ms) | **boost::list** (8.93 ms) | **std::forward_list** (9.17 ms) |
| **push_front** | **RG::LIST** (1.80 ms) | **std::forward_list** (10.87 ms) | **std::list** (11.18 ms) |
| **insert_middle** | **RG::LIST** (0.89 ms) | **std::forward_list** (4.49 ms) | **boost::list** (4.67 ms) |
| **erase_middle** | **RG::LIST** (0.89 ms) | **std::list** (5.14 ms) | **std::forward_list** (5.17 ms) |
| **iterate** | **RG::LIST** (0.74 ms) | **std::list** (0.88 ms) | **std::forward_list** (0.88 ms) |
| **clear** | **RG::LIST** (1.86 ms) | **std::forward_list** (9.02 ms) | **boost::list** (9.09 ms) |

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