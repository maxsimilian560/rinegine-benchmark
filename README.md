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
| **push_back** | 3.41 ms | 8.89 ms | 7.70 ms | 1.87 ms | 8.22 ms |
| **push_back_mean** | 3.40 ms | 8.90 ms | 7.67 ms | 1.84 ms | 8.33 ms |
| **push_back_median** | 3.40 ms | 8.87 ms | 7.68 ms | 1.84 ms | 8.25 ms |
| **push_back_stddev** | 0.01 ms | 0.10 ms | 0.04 ms | 0.02 ms | 0.22 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.43 ms | 8.94 ms | 7.73 ms | 2.28 ms | 9.07 ms |
| **push_front_mean** | 3.42 ms | 10.02 ms | 8.22 ms | 2.11 ms | 9.65 ms |
| **push_front_median** | 3.41 ms | 10.10 ms | 8.14 ms | 2.09 ms | 9.52 ms |
| **push_front_stddev** | 0.01 ms | 0.82 ms | 0.32 ms | 0.14 ms | 0.77 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.89 ms | 4.78 ms | 4.07 ms | 1.09 ms | 4.32 ms |
| **insert_middle_mean** | 1.88 ms | 4.77 ms | 4.19 ms | 1.09 ms | 4.44 ms |
| **insert_middle_median** | 1.86 ms | 4.78 ms | 4.12 ms | 1.09 ms | 4.40 ms |
| **insert_middle_stddev** | 0.03 ms | 0.08 ms | 0.14 ms | 0.00 ms | 0.12 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.80 ms | 4.70 ms | 4.69 ms | 1.09 ms | 4.38 ms |
| **erase_middle_mean** | 1.80 ms | 4.67 ms | 6.08 ms | 1.09 ms | 4.38 ms |
| **erase_middle_median** | 1.80 ms | 4.66 ms | 6.43 ms | 1.09 ms | 4.39 ms |
| **erase_middle_stddev** | 0.00 ms | 0.03 ms | 1.42 ms | 0.00 ms | 0.04 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.81 ms | 0.91 ms | 0.83 ms | 0.75 ms | 0.89 ms |
| **iterate_mean** | 0.82 ms | 0.94 ms | 0.90 ms | 0.74 ms | 0.99 ms |
| **iterate_median** | 0.81 ms | 0.91 ms | 0.90 ms | 0.74 ms | 0.95 ms |
| **iterate_stddev** | 0.01 ms | 0.08 ms | 0.06 ms | 0.01 ms | 0.10 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 3.39 ms | 8.90 ms | 7.91 ms | 1.87 ms | 8.16 ms |
| **clear_mean** | 3.40 ms | 8.81 ms | 7.74 ms | 1.87 ms | 8.16 ms |
| **clear_median** | 3.40 ms | 8.77 ms | 7.68 ms | 1.86 ms | 8.16 ms |
| **clear_stddev** | 0.01 ms | 0.08 ms | 0.19 ms | 0.01 ms | 0.02 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (1.87 ms) | **RG::K::LIST** (3.41 ms) | **std::forward_list** (7.70 ms) |
| **push_front** | **boost::list** (2.28 ms) | **RG::K::LIST** (3.43 ms) | **std::forward_list** (7.73 ms) |
| **insert_middle** | **boost::list** (1.09 ms) | **RG::K::LIST** (1.89 ms) | **std::forward_list** (4.07 ms) |
| **erase_middle** | **boost::list** (1.09 ms) | **RG::K::LIST** (1.80 ms) | **eastl::list** (4.38 ms) |
| **iterate** | **boost::list** (0.75 ms) | **RG::K::LIST** (0.81 ms) | **std::forward_list** (0.83 ms) |
| **clear** | **boost::list** (1.87 ms) | **RG::K::LIST** (3.39 ms) | **std::forward_list** (7.91 ms) |

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
| **push_back** | 3.41 ms | 9.04 ms | 7.71 ms | 1.85 ms | 8.12 ms |
| **push_front** | 3.39 ms | 9.25 ms | 9.07 ms | 1.65 ms | 12.84 ms |
| **insert_middle** | 1.86 ms | 5.54 ms | 4.79 ms | 1.09 ms | 4.88 ms |
| **erase_middle** | 1.80 ms | 4.98 ms | 5.41 ms | 1.07 ms | 6.25 ms |
| **iterate** | 0.79 ms | 3.01 ms | 3.70 ms | 0.72 ms | 2.76 ms |
| **clear** | 3.39 ms | 14.47 ms | 11.76 ms | 1.88 ms | 13.71 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (1.85 ms) | **RG::K::LIST** (3.41 ms) | **std::forward_list** (7.71 ms) |
| **push_front** | **boost::list** (1.65 ms) | **RG::K::LIST** (3.39 ms) | **std::forward_list** (9.07 ms) |
| **insert_middle** | **boost::list** (1.09 ms) | **RG::K::LIST** (1.86 ms) | **std::forward_list** (4.79 ms) |
| **erase_middle** | **boost::list** (1.07 ms) | **RG::K::LIST** (1.80 ms) | **std::list** (4.98 ms) |
| **iterate** | **boost::list** (0.72 ms) | **RG::K::LIST** (0.79 ms) | **eastl::list** (2.76 ms) |
| **clear** | **boost::list** (1.88 ms) | **RG::K::LIST** (3.39 ms) | **std::forward_list** (11.76 ms) |

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
