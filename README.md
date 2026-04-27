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
| **push_back** | 2.27 ms | 9.48 ms | 8.15 ms | 8.20 ms | 8.67 ms |
| **push_back_mean** | 2.34 ms | 9.42 ms | 8.13 ms | 8.15 ms | 8.61 ms |
| **push_back_median** | 2.28 ms | 9.39 ms | 8.15 ms | 8.14 ms | 8.59 ms |
| **push_back_stddev** | 0.11 ms | 0.05 ms | 0.04 ms | 0.04 ms | 0.05 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.42 ms | 9.71 ms | 8.36 ms | 8.68 ms | 8.96 ms |
| **push_front_mean** | 2.40 ms | 9.69 ms | 8.32 ms | 8.57 ms | 8.83 ms |
| **push_front_median** | 2.41 ms | 9.71 ms | 8.36 ms | 8.62 ms | 8.80 ms |
| **push_front_stddev** | 0.02 ms | 0.06 ms | 0.07 ms | 0.14 ms | 0.11 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.98 ms | 5.04 ms | 4.25 ms | 4.29 ms | 4.43 ms |
| **insert_middle_mean** | 0.98 ms | 4.97 ms | 4.30 ms | 4.34 ms | 4.48 ms |
| **insert_middle_median** | 0.98 ms | 4.94 ms | 4.32 ms | 4.34 ms | 4.51 ms |
| **insert_middle_stddev** | 0.01 ms | 0.06 ms | 0.04 ms | 0.05 ms | 0.05 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.92 ms | 4.89 ms | 4.51 ms | 4.32 ms | 4.40 ms |
| **erase_middle_mean** | 0.92 ms | 4.91 ms | 4.82 ms | 4.34 ms | 4.41 ms |
| **erase_middle_median** | 0.92 ms | 4.90 ms | 4.69 ms | 4.33 ms | 4.40 ms |
| **erase_middle_stddev** | 0.00 ms | 0.02 ms | 0.39 ms | 0.03 ms | 0.02 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.66 ms | 0.67 ms | 0.67 ms | 0.72 ms | 0.66 ms |
| **iterate_mean** | 0.66 ms | 0.67 ms | 1.07 ms | 0.73 ms | 0.78 ms |
| **iterate_median** | 0.66 ms | 0.67 ms | 0.67 ms | 0.72 ms | 0.66 ms |
| **iterate_stddev** | 0.00 ms | 0.02 ms | 0.70 ms | 0.03 ms | 0.21 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.55 ms | 9.26 ms | 8.34 ms | 8.32 ms | 8.46 ms |
| **clear_mean** | 2.49 ms | 9.34 ms | 8.30 ms | 8.30 ms | 8.44 ms |
| **clear_median** | 2.53 ms | 9.27 ms | 8.28 ms | 8.29 ms | 8.43 ms |
| **clear_stddev** | 0.09 ms | 0.13 ms | 0.03 ms | 0.02 ms | 0.02 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.27 ms) | **std::forward_list** (8.15 ms) | **boost::list** (8.20 ms) |
| **push_front** | **RG::LIST** (2.42 ms) | **std::forward_list** (8.36 ms) | **boost::list** (8.68 ms) |
| **insert_middle** | **RG::LIST** (0.98 ms) | **std::forward_list** (4.25 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::LIST** (0.92 ms) | **boost::list** (4.32 ms) | **eastl::list** (4.40 ms) |
| **iterate** | **RG::LIST** (0.66 ms) | **eastl::list** (0.66 ms) | **std::forward_list** (0.67 ms) |
| **clear** | **RG::LIST** (2.55 ms) | **boost::list** (8.32 ms) | **std::forward_list** (8.34 ms) |

<!-- endinclude -->

## Результаты с большей погрешностью, отражающие работу при малой/средней нагрузке системы  
![list_fast](list/fast/chart.svg)
<!-- include: list/fast/result.md -->
| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.23 ms | 9.53 ms | 8.04 ms | 8.15 ms | 8.73 ms |
| **push_front** | 2.35 ms | 9.62 ms | 9.15 ms | 9.41 ms | 10.12 ms |
| **insert_middle** | 0.97 ms | 4.99 ms | 4.21 ms | 4.32 ms | 4.41 ms |
| **erase_middle** | 1.02 ms | 4.91 ms | 4.61 ms | 5.17 ms | 5.45 ms |
| **iterate** | 0.67 ms | 0.95 ms | 1.01 ms | 1.14 ms | 0.83 ms |
| **clear** | 2.42 ms | 9.24 ms | 8.18 ms | 8.37 ms | 8.53 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.23 ms) | **std::forward_list** (8.04 ms) | **boost::list** (8.15 ms) |
| **push_front** | **RG::LIST** (2.35 ms) | **std::forward_list** (9.15 ms) | **boost::list** (9.41 ms) |
| **insert_middle** | **RG::LIST** (0.97 ms) | **std::forward_list** (4.21 ms) | **boost::list** (4.32 ms) |
| **erase_middle** | **RG::LIST** (1.02 ms) | **std::forward_list** (4.61 ms) | **std::list** (4.91 ms) |
| **iterate** | **RG::LIST** (0.67 ms) | **eastl::list** (0.83 ms) | **std::list** (0.95 ms) |
| **clear** | **RG::LIST** (2.42 ms) | **std::forward_list** (8.18 ms) | **boost::list** (8.37 ms) |

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
