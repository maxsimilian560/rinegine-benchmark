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
### Внимание! Данные типы ещё не доделаны и будут изменены в будущем  
<details>
<summary>
Rinegine::Kernel::LIST Benchmark
</summary>
<div class="details-content"><div>

> Данный тип временно находится в модуле WIP

Сравнительный бенчмарк связного списка **RG::K::LIST** против 4 альтернатив:
`std::list`, `std::forward_list`, `boost::list`, `eastl::list`.

## 📊 Результаты

N=500 000 · GCC 15.2.1 `-O3 -march=native` · логарифмическая шкала  
## Подробные результаты с минимальной погрешностью  

![list_full](list/full/chart.svg)

<!-- include: list/full/result.md -->
| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.34 ms | 25.91 ms | 27.92 ms | 2.03 ms | 23.54 ms |
| **push_back_mean** | 3.36 ms | 26.76 ms | 25.40 ms | 2.04 ms | 23.53 ms |
| **push_back_median** | 3.35 ms | 26.03 ms | 25.16 ms | 2.03 ms | 23.49 ms |
| **push_back_stddev** | 0.03 ms | 1.69 ms | 1.35 ms | 0.03 ms | 0.37 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.60 ms | 15.35 ms | 13.72 ms | 3.77 ms | 14.52 ms |
| **push_front_mean** | 3.61 ms | 15.58 ms | 13.90 ms | 3.84 ms | 13.12 ms |
| **push_front_median** | 3.59 ms | 15.43 ms | 13.85 ms | 3.84 ms | 12.93 ms |
| **push_front_stddev** | 0.04 ms | 0.34 ms | 0.17 ms | 0.05 ms | 0.55 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.88 ms | 7.70 ms | 7.04 ms | 1.17 ms | 6.79 ms |
| **insert_middle_mean** | 1.88 ms | 7.81 ms | 7.07 ms | 1.17 ms | 6.85 ms |
| **insert_middle_median** | 1.88 ms | 7.82 ms | 7.06 ms | 1.17 ms | 6.85 ms |
| **insert_middle_stddev** | 0.01 ms | 0.07 ms | 0.03 ms | 0.01 ms | 0.07 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.94 ms | 8.04 ms | 7.40 ms | 1.15 ms | 6.67 ms |
| **erase_middle_mean** | 1.98 ms | 8.20 ms | 7.49 ms | 1.17 ms | 6.83 ms |
| **erase_middle_median** | 1.95 ms | 8.05 ms | 7.44 ms | 1.18 ms | 6.77 ms |
| **erase_middle_stddev** | 0.07 ms | 0.49 ms | 0.18 ms | 0.02 ms | 0.16 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.94 ms | 1.02 ms | 1.02 ms | 0.96 ms | 1.03 ms |
| **iterate_mean** | 0.93 ms | 1.02 ms | 1.03 ms | 0.96 ms | 1.02 ms |
| **iterate_median** | 0.93 ms | 1.02 ms | 1.03 ms | 0.96 ms | 1.02 ms |
| **iterate_stddev** | 0.01 ms | 0.01 ms | 0.01 ms | 0.01 ms | 0.01 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 3.52 ms | 14.67 ms | 13.75 ms | 2.02 ms | 12.92 ms |
| **clear_mean** | 3.54 ms | 15.17 ms | 13.81 ms | 2.04 ms | 12.44 ms |
| **clear_median** | 3.51 ms | 15.17 ms | 13.71 ms | 2.04 ms | 12.46 ms |
| **clear_stddev** | 0.09 ms | 0.31 ms | 0.28 ms | 0.01 ms | 0.22 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (2.03 ms) | **RG::K::LIST** (3.34 ms) | **eastl::list** (23.54 ms) |
| **push_front** | **RG::K::LIST** (3.60 ms) | **boost::list** (3.77 ms) | **std::forward_list** (13.72 ms) |
| **insert_middle** | **boost::list** (1.17 ms) | **RG::K::LIST** (1.88 ms) | **eastl::list** (6.79 ms) |
| **erase_middle** | **boost::list** (1.15 ms) | **RG::K::LIST** (1.94 ms) | **eastl::list** (6.67 ms) |
| **iterate** | **RG::K::LIST** (0.94 ms) | **boost::list** (0.96 ms) | **std::forward_list** (1.02 ms) |
| **clear** | **boost::list** (2.02 ms) | **RG::K::LIST** (3.52 ms) | **eastl::list** (12.92 ms) |

<!-- endinclude -->

> Прошлое  

![list_full](list/full/chart_prev.svg)

| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.44 ms | 9.43 ms | 8.10 ms | 8.22 ms | 8.61 ms |
| **push_back_mean** | 2.40 ms | 9.40 ms | 8.09 ms | 8.16 ms | 8.71 ms |
| **push_back_median** | 2.44 ms | 9.41 ms | 8.09 ms | 8.14 ms | 8.61 ms |
| **push_back_stddev** | 0.10 ms | 0.03 ms | 0.01 ms | 0.05 ms | 0.21 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.54 ms | 9.49 ms | 8.26 ms | 8.31 ms | 8.66 ms |
| **push_front_mean** | 2.51 ms | 9.48 ms | 8.21 ms | 8.40 ms | 8.62 ms |
| **push_front_median** | 2.52 ms | 9.49 ms | 8.25 ms | 8.39 ms | 8.62 ms |
| **push_front_stddev** | 0.04 ms | 0.04 ms | 0.08 ms | 0.10 ms | 0.03 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.88 ms | 5.04 ms | 4.33 ms | 4.34 ms | 4.48 ms |
| **insert_middle_mean** | 0.88 ms | 4.98 ms | 4.34 ms | 4.34 ms | 4.53 ms |
| **insert_middle_median** | 0.88 ms | 4.97 ms | 4.33 ms | 4.34 ms | 4.53 ms |
| **insert_middle_stddev** | 0.00 ms | 0.05 ms | 0.03 ms | 0.05 ms | 0.05 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.91 ms | 4.89 ms | 4.37 ms | 4.33 ms | 4.37 ms |
| **erase_middle_mean** | 0.91 ms | 4.89 ms | 4.76 ms | 4.34 ms | 4.39 ms |
| **erase_middle_median** | 0.91 ms | 4.89 ms | 4.67 ms | 4.33 ms | 4.38 ms |
| **erase_middle_stddev** | 0.00 ms | 0.00 ms | 0.45 ms | 0.03 ms | 0.03 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.65 ms | 0.65 ms | 0.66 ms | 0.71 ms | 0.65 ms |
| **iterate_mean** | 0.65 ms | 0.73 ms | 0.75 ms | 0.74 ms | 0.68 ms |
| **iterate_median** | 0.65 ms | 0.65 ms | 0.66 ms | 0.71 ms | 0.65 ms |
| **iterate_stddev** | 0.00 ms | 0.14 ms | 0.16 ms | 0.05 ms | 0.05 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.30 ms | 9.29 ms | 8.33 ms | 8.32 ms | 8.45 ms |
| **clear_mean** | 2.33 ms | 9.28 ms | 8.29 ms | 8.30 ms | 8.44 ms |
| **clear_median** | 2.30 ms | 9.29 ms | 8.31 ms | 8.31 ms | 8.45 ms |
| **clear_stddev** | 0.06 ms | 0.02 ms | 0.05 ms | 0.02 ms | 0.01 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (2.44 ms) | **std::forward_list** (8.10 ms) | **boost::list** (8.22 ms) |
| **push_front** | **RG::K::LIST** (2.54 ms) | **std::forward_list** (8.26 ms) | **boost::list** (8.31 ms) |
| **insert_middle** | **RG::K::LIST** (0.88 ms) | **std::forward_list** (4.33 ms) | **boost::list** (4.34 ms) |
| **erase_middle** | **RG::K::LIST** (0.91 ms) | **boost::list** (4.33 ms) | **std::forward_list** (4.37 ms) |
| **iterate** | **std::list** (0.65 ms) | **eastl::list** (0.65 ms) | **RG::K::LIST** (0.65 ms) |
| **clear** | **RG::K::LIST** (2.30 ms) | **boost::list** (8.32 ms) | **std::forward_list** (8.33 ms) |


## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![list_fast](list/fast/chart.svg)
<!-- include: list/fast/result.md -->
| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.75 ms | 26.11 ms | 23.88 ms | 2.07 ms | 22.85 ms |
| **push_front** | 3.56 ms | 14.78 ms | 13.32 ms | 3.01 ms | 12.20 ms |
| **insert_middle** | 2.01 ms | 8.32 ms | 7.19 ms | 1.24 ms | 6.43 ms |
| **erase_middle** | 1.96 ms | 10.48 ms | 10.77 ms | 1.17 ms | 9.00 ms |
| **iterate** | 0.92 ms | 1.09 ms | 1.10 ms | 0.93 ms | 0.90 ms |
| **clear** | 3.66 ms | 23.84 ms | 22.44 ms | 2.13 ms | 20.69 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (2.07 ms) | **RG::K::LIST** (3.75 ms) | **eastl::list** (22.85 ms) |
| **push_front** | **boost::list** (3.01 ms) | **RG::K::LIST** (3.56 ms) | **eastl::list** (12.20 ms) |
| **insert_middle** | **boost::list** (1.24 ms) | **RG::K::LIST** (2.01 ms) | **eastl::list** (6.43 ms) |
| **erase_middle** | **boost::list** (1.17 ms) | **RG::K::LIST** (1.96 ms) | **eastl::list** (9.00 ms) |
| **iterate** | **eastl::list** (0.90 ms) | **RG::K::LIST** (0.92 ms) | **boost::list** (0.93 ms) |
| **clear** | **boost::list** (2.13 ms) | **RG::K::LIST** (3.66 ms) | **eastl::list** (20.69 ms) |

<!-- endinclude -->

> Прошлое  

![list_fast](list/fast/chart_prev.svg)
| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.39 ms | 9.33 ms | 8.01 ms | 8.14 ms | 8.57 ms |
| **push_front** | 2.58 ms | 9.64 ms | 8.52 ms | 8.77 ms | 9.01 ms |
| **insert_middle** | 0.94 ms | 4.89 ms | 4.22 ms | 4.29 ms | 4.41 ms |
| **erase_middle** | 0.97 ms | 4.89 ms | 4.56 ms | 5.03 ms | 5.25 ms |
| **iterate** | 0.66 ms | 0.96 ms | 1.07 ms | 2.46 ms | 0.85 ms |
| **clear** | 2.46 ms | 9.27 ms | 8.23 ms | 8.35 ms | 8.64 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (2.39 ms) | **std::forward_list** (8.01 ms) | **boost::list** (8.14 ms) |
| **push_front** | **RG::K::LIST** (2.58 ms) | **std::forward_list** (8.52 ms) | **boost::list** (8.77 ms) |
| **insert_middle** | **RG::K::LIST** (0.94 ms) | **std::forward_list** (4.22 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::K::LIST** (0.97 ms) | **std::forward_list** (4.56 ms) | **std::list** (4.89 ms) |
| **iterate** | **RG::K::LIST** (0.66 ms) | **eastl::list** (0.85 ms) | **std::list** (0.96 ms) |
| **clear** | **RG::K::LIST** (2.46 ms) | **std::forward_list** (8.23 ms) | **boost::list** (8.35 ms) |



## 🛠 Сборка и запуск

### Зависимости (Arch Linux)

```bash
sudo pacman -S boost 
yay -S eastl benchmark-git  # (Из AUR) Google Benchmark
```

### Сборка и запуск

```bash
../Rinegine/bin/rgcmd # на windows следует вводить win, на линуксе linux. Если на линуксе ошибка, то попробуйте ub_linux или попробуйте загрузить компилятор gcc/clang
sh ./list/full/run.sh # для подробных результатов с уменьшением влияния нагрузки системы на результаты и редактированием README.md
sh ./list/fast/run.sh # для быстрого бенчмарка с обычным влиянием нагрузки системы на результаты и редактированием README.md
sh ./run.sh # для запуска двух бенчмарков подряд с редактированием README.md
./benchmark_runner --help # помощь по командам
./benchmark_runner # быстрый бенчмарк в терминале
```

### Фильтрация

```bash
./benchmark_runner --benchmark_filter="RG::K::LIST/.*"
./benchmark_runner --benchmark_filter="push_front"
```

</div></div>
</details>
