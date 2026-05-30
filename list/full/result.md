| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 13.10 ms | 17.84 ms | 16.22 ms | 16.81 ms | 16.31 ms |
| **push_back_mean** | 13.15 ms | 17.64 ms | 16.46 ms | 16.63 ms | 16.15 ms |
| **push_back_median** | 13.10 ms | 17.56 ms | 16.32 ms | 16.72 ms | 16.08 ms |
| **push_back_stddev** | 0.19 ms | 0.18 ms | 0.34 ms | 0.23 ms | 0.13 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 74.75 ms | 11.58 ms | 10.53 ms | 11.09 ms | 10.21 ms |
| **push_front_mean** | 44.25 ms | 11.68 ms | 10.49 ms | 10.98 ms | 10.03 ms |
| **push_front_median** | 42.96 ms | 11.58 ms | 10.47 ms | 10.93 ms | 9.97 ms |
| **push_front_stddev** | 29.87 ms | 0.25 ms | 0.03 ms | 0.10 ms | 0.16 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 41.15 ms | 6.05 ms | 5.42 ms | 5.44 ms | 5.00 ms |
| **insert_middle_mean** | 41.85 ms | 6.04 ms | 5.42 ms | 5.45 ms | 5.00 ms |
| **insert_middle_median** | 41.15 ms | 6.05 ms | 5.42 ms | 5.45 ms | 4.99 ms |
| **insert_middle_stddev** | 3.08 ms | 0.03 ms | 0.03 ms | 0.01 ms | 0.00 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 75.79 ms | 7.38 ms | 6.97 ms | 6.94 ms | 6.44 ms |
| **erase_middle_mean** | 54.88 ms | 7.42 ms | 7.32 ms | 6.95 ms | 6.45 ms |
| **erase_middle_median** | 51.02 ms | 7.39 ms | 7.02 ms | 6.94 ms | 6.44 ms |
| **erase_middle_stddev** | 19.27 ms | 0.06 ms | 0.56 ms | 0.02 ms | 0.03 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 1.37 ms | 0.82 ms | 0.84 ms | 0.78 ms | 0.78 ms |
| **iterate_mean** | 1.44 ms | 0.81 ms | 0.84 ms | 0.79 ms | 0.79 ms |
| **iterate_median** | 1.37 ms | 0.82 ms | 0.84 ms | 0.78 ms | 0.79 ms |
| **iterate_stddev** | 0.13 ms | 0.01 ms | 0.03 ms | 0.01 ms | 0.00 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 48.18 ms | 16.54 ms | 15.43 ms | 14.97 ms | 14.38 ms |
| **clear_mean** | 100.07 ms | 16.25 ms | 15.14 ms | 15.02 ms | 14.29 ms |
| **clear_median** | 93.43 ms | 16.44 ms | 15.00 ms | 15.03 ms | 14.29 ms |
| **clear_stddev** | 55.51 ms | 0.42 ms | 0.25 ms | 0.06 ms | 0.09 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (13.10 ms) | **std::forward_list** (16.22 ms) | **eastl::list** (16.31 ms) |
| **push_front** | **eastl::list** (10.21 ms) | **std::forward_list** (10.53 ms) | **boost::list** (11.09 ms) |
| **insert_middle** | **eastl::list** (5.00 ms) | **std::forward_list** (5.42 ms) | **boost::list** (5.44 ms) |
| **erase_middle** | **eastl::list** (6.44 ms) | **boost::list** (6.94 ms) | **std::forward_list** (6.97 ms) |
| **iterate** | **boost::list** (0.78 ms) | **eastl::list** (0.78 ms) | **std::list** (0.82 ms) |
| **clear** | **eastl::list** (14.38 ms) | **boost::list** (14.97 ms) | **std::forward_list** (15.43 ms) |

