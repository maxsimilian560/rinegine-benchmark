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

Сравнительный бенчмарк связного списка **RG::LIST** против 4 альтернатив:
`std::list`, `std::forward_list`, `boost::list`, `eastl::list`.

## 📊 Результаты

N=500 000 · GCC 15.2.1 `-O3 -march=native` · логарифмическая шкала  
## Подробные результаты с минимальной погрешностью  

![list_full](list/full/chart.svg)

<!-- include: list/full/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 15.63 ms | 10.07 ms | 8.53 ms | 8.61 ms | 9.09 ms |
| **push_back_mean** | 15.58 ms | 10.04 ms | 8.56 ms | 8.64 ms | 9.14 ms |
| **push_back_median** | 15.58 ms | 10.07 ms | 8.56 ms | 8.61 ms | 9.15 ms |
| **push_back_stddev** | 0.05 ms | 0.11 ms | 0.03 ms | 0.08 ms | 0.05 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 15.73 ms | 10.24 ms | 8.43 ms | 8.84 ms | 9.58 ms |
| **push_front_mean** | 15.71 ms | 10.22 ms | 8.47 ms | 8.82 ms | 9.70 ms |
| **push_front_median** | 15.70 ms | 10.24 ms | 8.45 ms | 8.84 ms | 9.71 ms |
| **push_front_stddev** | 0.01 ms | 0.12 ms | 0.07 ms | 0.09 ms | 0.12 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 7.55 ms | 5.37 ms | 4.67 ms | 4.61 ms | 4.77 ms |
| **insert_middle_mean** | 7.53 ms | 5.38 ms | 4.67 ms | 4.60 ms | 4.85 ms |
| **insert_middle_median** | 7.55 ms | 5.38 ms | 4.67 ms | 4.60 ms | 4.87 ms |
| **insert_middle_stddev** | 0.03 ms | 0.02 ms | 0.03 ms | 0.01 ms | 0.06 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 8.54 ms | 5.28 ms | 4.91 ms | 4.60 ms | 4.82 ms |
| **erase_middle_mean** | 7.92 ms | 5.80 ms | 5.51 ms | 4.61 ms | 4.78 ms |
| **erase_middle_median** | 7.61 ms | 5.39 ms | 5.41 ms | 4.61 ms | 4.78 ms |
| **erase_middle_stddev** | 0.54 ms | 0.80 ms | 0.66 ms | 0.01 ms | 0.03 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.78 ms | 0.75 ms | 0.74 ms | 0.81 ms | 0.74 ms |
| **iterate_mean** | 0.79 ms | 0.74 ms | 0.74 ms | 0.81 ms | 0.74 ms |
| **iterate_median** | 0.78 ms | 0.73 ms | 0.74 ms | 0.81 ms | 0.74 ms |
| **iterate_stddev** | 0.03 ms | 0.01 ms | 0.00 ms | 0.00 ms | 0.01 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 71.33 ms | 10.06 ms | 8.65 ms | 8.85 ms | 9.28 ms |
| **clear_mean** | 72.24 ms | 10.01 ms | 8.84 ms | 8.77 ms | 9.32 ms |
| **clear_median** | 71.33 ms | 10.00 ms | 8.67 ms | 8.77 ms | 9.28 ms |
| **clear_stddev** | 3.30 ms | 0.05 ms | 0.31 ms | 0.08 ms | 0.16 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **std::forward_list** (8.53 ms) | **boost::list** (8.61 ms) | **eastl::list** (9.09 ms) |
| **push_front** | **std::forward_list** (8.43 ms) | **boost::list** (8.84 ms) | **eastl::list** (9.58 ms) |
| **insert_middle** | **boost::list** (4.61 ms) | **std::forward_list** (4.67 ms) | **eastl::list** (4.77 ms) |
| **erase_middle** | **boost::list** (4.60 ms) | **eastl::list** (4.82 ms) | **std::forward_list** (4.91 ms) |
| **iterate** | **std::forward_list** (0.74 ms) | **eastl::list** (0.74 ms) | **std::list** (0.75 ms) |
| **clear** | **std::forward_list** (8.65 ms) | **boost::list** (8.85 ms) | **eastl::list** (9.28 ms) |

<!-- endinclude -->

> Прошлое  

![list_full](list/full/chart_prev.svg)

| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
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
| **push_back** | **RG::LIST** (2.44 ms) | **std::forward_list** (8.10 ms) | **boost::list** (8.22 ms) |
| **push_front** | **RG::LIST** (2.54 ms) | **std::forward_list** (8.26 ms) | **boost::list** (8.31 ms) |
| **insert_middle** | **RG::LIST** (0.88 ms) | **std::forward_list** (4.33 ms) | **boost::list** (4.34 ms) |
| **erase_middle** | **RG::LIST** (0.91 ms) | **boost::list** (4.33 ms) | **std::forward_list** (4.37 ms) |
| **iterate** | **std::list** (0.65 ms) | **eastl::list** (0.65 ms) | **RG::LIST** (0.65 ms) |
| **clear** | **RG::LIST** (2.30 ms) | **boost::list** (8.32 ms) | **std::forward_list** (8.33 ms) |


## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![list_fast](list/fast/chart.svg)
<!-- include: list/fast/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 5.12 ms | 9.85 ms | 8.49 ms | 8.67 ms | 9.20 ms |
| **push_front** | 5.06 ms | 10.54 ms | 9.54 ms | 11.18 ms | 11.15 ms |
| **insert_middle** | 6.25 ms | 7.46 ms | 6.27 ms | 6.46 ms | 6.42 ms |
| **erase_middle** | 28.42 ms | 6.94 ms | 6.42 ms | 6.51 ms | 6.80 ms |
| **iterate** | 0.77 ms | 2.59 ms | 2.55 ms | 2.61 ms | 2.43 ms |
| **clear** | 83.95 ms | 14.35 ms | 11.72 ms | 11.41 ms | 12.27 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (5.12 ms) | **std::forward_list** (8.49 ms) | **boost::list** (8.67 ms) |
| **push_front** | **RG::LIST** (5.06 ms) | **std::forward_list** (9.54 ms) | **std::list** (10.54 ms) |
| **insert_middle** | **RG::LIST** (6.25 ms) | **std::forward_list** (6.27 ms) | **eastl::list** (6.42 ms) |
| **erase_middle** | **std::forward_list** (6.42 ms) | **boost::list** (6.51 ms) | **eastl::list** (6.80 ms) |
| **iterate** | **RG::LIST** (0.77 ms) | **eastl::list** (2.43 ms) | **std::forward_list** (2.55 ms) |
| **clear** | **boost::list** (11.41 ms) | **std::forward_list** (11.72 ms) | **eastl::list** (12.27 ms) |

<!-- endinclude -->

> Прошлое  

![list_fast](list/fast/chart_prev.svg)
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
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
| **push_back** | **RG::LIST** (2.39 ms) | **std::forward_list** (8.01 ms) | **boost::list** (8.14 ms) |
| **push_front** | **RG::LIST** (2.58 ms) | **std::forward_list** (8.52 ms) | **boost::list** (8.77 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **std::forward_list** (4.22 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::LIST** (0.97 ms) | **std::forward_list** (4.56 ms) | **std::list** (4.89 ms) |
| **iterate** | **RG::LIST** (0.66 ms) | **eastl::list** (0.85 ms) | **std::list** (0.96 ms) |
| **clear** | **RG::LIST** (2.46 ms) | **std::forward_list** (8.23 ms) | **boost::list** (8.35 ms) |



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
./benchmark_runner --benchmark_filter="RG::LIST/.*"
./benchmark_runner --benchmark_filter="push_front"
```

</div></div>
</details>
