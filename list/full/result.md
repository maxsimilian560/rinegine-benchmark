| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.51 ms | 19.15 ms | 16.72 ms | 16.83 ms | 16.22 ms |
| **push_back_mean** | 2.85 ms | 18.93 ms | 17.18 ms | 16.99 ms | 16.30 ms |
| **push_back_median** | 2.65 ms | 18.90 ms | 16.96 ms | 17.03 ms | 16.26 ms |
| **push_back_stddev** | 0.47 ms | 0.21 ms | 0.60 ms | 0.15 ms | 0.11 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.55 ms | 10.64 ms | 9.49 ms | 9.54 ms | 9.01 ms |
| **push_front_mean** | 2.57 ms | 10.60 ms | 9.59 ms | 9.93 ms | 9.02 ms |
| **push_front_median** | 2.55 ms | 10.64 ms | 9.61 ms | 9.78 ms | 9.01 ms |
| **push_front_stddev** | 0.03 ms | 0.16 ms | 0.10 ms | 0.48 ms | 0.01 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.34 ms | 6.10 ms | 5.07 ms | 5.36 ms | 4.79 ms |
| **insert_middle_mean** | 1.36 ms | 5.98 ms | 5.21 ms | 5.45 ms | 4.78 ms |
| **insert_middle_median** | 1.35 ms | 6.00 ms | 5.24 ms | 5.47 ms | 4.79 ms |
| **insert_middle_stddev** | 0.03 ms | 0.14 ms | 0.13 ms | 0.08 ms | 0.10 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.31 ms | 7.35 ms | 6.75 ms | 7.06 ms | 6.70 ms |
| **erase_middle_mean** | 1.35 ms | 7.54 ms | 7.23 ms | 7.06 ms | 6.78 ms |
| **erase_middle_median** | 1.34 ms | 7.59 ms | 7.39 ms | 7.06 ms | 6.80 ms |
| **erase_middle_stddev** | 0.04 ms | 0.17 ms | 0.43 ms | 0.16 ms | 0.07 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.73 ms | 0.86 ms | 0.89 ms | 0.81 ms | 0.82 ms |
| **iterate_mean** | 0.78 ms | 0.87 ms | 0.88 ms | 0.83 ms | 0.83 ms |
| **iterate_median** | 0.73 ms | 0.87 ms | 0.88 ms | 0.84 ms | 0.83 ms |
| **iterate_stddev** | 0.08 ms | 0.01 ms | 0.01 ms | 0.02 ms | 0.01 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.53 ms | 15.95 ms | 14.85 ms | 14.85 ms | 14.22 ms |
| **clear_mean** | 2.60 ms | 15.95 ms | 15.14 ms | 15.05 ms | 14.24 ms |
| **clear_median** | 2.62 ms | 15.95 ms | 15.21 ms | 14.99 ms | 14.23 ms |
| **clear_stddev** | 0.06 ms | 0.07 ms | 0.27 ms | 0.24 ms | 0.03 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (2.51 ms) | **eastl::list** (16.22 ms) | **std::forward_list** (16.72 ms) |
| **push_front** | **RG::K::LIST** (2.55 ms) | **eastl::list** (9.01 ms) | **std::forward_list** (9.49 ms) |
| **insert_middle** | **RG::K::LIST** (1.34 ms) | **eastl::list** (4.79 ms) | **std::forward_list** (5.07 ms) |
| **erase_middle** | **RG::K::LIST** (1.31 ms) | **eastl::list** (6.70 ms) | **std::forward_list** (6.75 ms) |
| **iterate** | **RG::K::LIST** (0.73 ms) | **boost::list** (0.81 ms) | **eastl::list** (0.82 ms) |
| **clear** | **RG::K::LIST** (2.53 ms) | **eastl::list** (14.22 ms) | **std::forward_list** (14.85 ms) |

