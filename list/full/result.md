| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.31 ms | 9.47 ms | 8.20 ms | 8.19 ms | 8.61 ms |
| **push_back_mean** | 2.29 ms | 9.43 ms | 8.16 ms | 8.16 ms | 8.63 ms |
| **push_back_median** | 2.30 ms | 9.43 ms | 8.15 ms | 8.14 ms | 8.61 ms |
| **push_back_stddev** | 0.02 ms | 0.04 ms | 0.03 ms | 0.03 ms | 0.03 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.35 ms | 9.67 ms | 9.66 ms | 8.50 ms | 8.79 ms |
| **push_front_mean** | 2.33 ms | 9.70 ms | 9.45 ms | 8.52 ms | 8.85 ms |
| **push_front_median** | 2.33 ms | 9.67 ms | 9.35 ms | 8.50 ms | 8.80 ms |
| **push_front_stddev** | 0.01 ms | 0.10 ms | 0.18 ms | 0.03 ms | 0.10 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.98 ms | 5.01 ms | 4.26 ms | 4.38 ms | 4.43 ms |
| **insert_middle_mean** | 0.98 ms | 4.98 ms | 4.35 ms | 4.39 ms | 4.52 ms |
| **insert_middle_median** | 0.98 ms | 4.97 ms | 4.35 ms | 4.38 ms | 4.53 ms |
| **insert_middle_stddev** | 0.00 ms | 0.02 ms | 0.08 ms | 0.02 ms | 0.09 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.95 ms | 4.87 ms | 4.55 ms | 4.32 ms | 4.39 ms |
| **erase_middle_mean** | 0.95 ms | 4.90 ms | 4.77 ms | 4.34 ms | 4.45 ms |
| **erase_middle_median** | 0.96 ms | 4.88 ms | 4.59 ms | 4.33 ms | 4.40 ms |
| **erase_middle_stddev** | 0.00 ms | 0.03 ms | 0.34 ms | 0.02 ms | 0.09 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.67 ms | 0.66 ms | 0.66 ms | 0.73 ms | 0.67 ms |
| **iterate_mean** | 0.66 ms | 0.69 ms | 0.84 ms | 0.77 ms | 0.72 ms |
| **iterate_median** | 0.66 ms | 0.66 ms | 0.66 ms | 0.73 ms | 0.67 ms |
| **iterate_stddev** | 0.00 ms | 0.05 ms | 0.31 ms | 0.07 ms | 0.09 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.54 ms | 9.40 ms | 8.34 ms | 8.31 ms | 8.47 ms |
| **clear_mean** | 2.49 ms | 9.34 ms | 8.33 ms | 8.31 ms | 8.46 ms |
| **clear_median** | 2.47 ms | 9.36 ms | 8.34 ms | 8.31 ms | 8.47 ms |
| **clear_stddev** | 0.04 ms | 0.08 ms | 0.03 ms | 0.01 ms | 0.02 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.31 ms) | **boost::list** (8.19 ms) | **std::forward_list** (8.20 ms) |
| **push_front** | **RG::LIST** (2.35 ms) | **boost::list** (8.50 ms) | **eastl::list** (8.79 ms) |
| **insert_middle** | **RG::LIST** (0.98 ms) | **std::forward_list** (4.26 ms) | **boost::list** (4.38 ms) |
| **erase_middle** | **RG::LIST** (0.95 ms) | **boost::list** (4.32 ms) | **eastl::list** (4.39 ms) |
| **iterate** | **std::forward_list** (0.66 ms) | **std::list** (0.66 ms) | **RG::LIST** (0.67 ms) |
| **clear** | **RG::LIST** (2.54 ms) | **boost::list** (8.31 ms) | **std::forward_list** (8.34 ms) |

