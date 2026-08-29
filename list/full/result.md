| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.38 ms | 17.98 ms | 17.64 ms | 17.02 ms | 16.34 ms |
| **push_back_mean** | 5.89 ms | 17.78 ms | 16.84 ms | 17.92 ms | 16.36 ms |
| **push_back_median** | 2.28 ms | 17.32 ms | 16.59 ms | 17.28 ms | 16.27 ms |
| **push_back_stddev** | 11.26 ms | 0.91 ms | 0.53 ms | 1.66 ms | 0.34 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.29 ms | 10.54 ms | 9.86 ms | 9.80 ms | 8.91 ms |
| **push_front_mean** | 2.26 ms | 10.67 ms | 9.65 ms | 10.79 ms | 9.13 ms |
| **push_front_median** | 2.25 ms | 10.62 ms | 9.59 ms | 9.72 ms | 8.92 ms |
| **push_front_stddev** | 0.04 ms | 0.19 ms | 0.25 ms | 2.34 ms | 0.73 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.33 ms | 5.42 ms | 4.81 ms | 4.87 ms | 4.42 ms |
| **insert_middle_mean** | 1.26 ms | 5.39 ms | 4.92 ms | 4.92 ms | 4.49 ms |
| **insert_middle_median** | 1.24 ms | 5.36 ms | 4.88 ms | 4.89 ms | 4.44 ms |
| **insert_middle_stddev** | 0.07 ms | 0.12 ms | 0.11 ms | 0.10 ms | 0.16 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.22 ms | 9.87 ms | 6.48 ms | 7.02 ms | 6.75 ms |
| **erase_middle_mean** | 1.25 ms | 8.61 ms | 8.04 ms | 6.68 ms | 6.26 ms |
| **erase_middle_median** | 1.23 ms | 7.24 ms | 7.30 ms | 6.66 ms | 6.17 ms |
| **erase_middle_stddev** | 0.05 ms | 2.17 ms | 1.81 ms | 0.17 ms | 0.26 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.67 ms | 0.82 ms | 0.79 ms | 0.79 ms | 0.78 ms |
| **iterate_mean** | 0.67 ms | 0.80 ms | 0.80 ms | 0.79 ms | 0.81 ms |
| **iterate_median** | 0.67 ms | 0.80 ms | 0.79 ms | 0.79 ms | 0.79 ms |
| **iterate_stddev** | 0.01 ms | 0.02 ms | 0.02 ms | 0.02 ms | 0.05 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.24 ms | 15.88 ms | 15.20 ms | 15.07 ms | 14.26 ms |
| **clear_mean** | 2.28 ms | 15.91 ms | 15.29 ms | 15.19 ms | 14.17 ms |
| **clear_median** | 2.27 ms | 15.89 ms | 15.18 ms | 15.10 ms | 14.11 ms |
| **clear_stddev** | 0.05 ms | 0.12 ms | 0.40 ms | 0.25 ms | 0.21 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (2.38 ms) | **eastl::list** (16.34 ms) | **boost::list** (17.02 ms) |
| **push_front** | **RG::K::LIST** (2.29 ms) | **eastl::list** (8.91 ms) | **boost::list** (9.80 ms) |
| **insert_middle** | **RG::K::LIST** (1.33 ms) | **eastl::list** (4.42 ms) | **std::forward_list** (4.81 ms) |
| **erase_middle** | **RG::K::LIST** (1.22 ms) | **std::forward_list** (6.48 ms) | **eastl::list** (6.75 ms) |
| **iterate** | **RG::K::LIST** (0.67 ms) | **eastl::list** (0.78 ms) | **boost::list** (0.79 ms) |
| **clear** | **RG::K::LIST** (2.24 ms) | **eastl::list** (14.26 ms) | **boost::list** (15.07 ms) |

