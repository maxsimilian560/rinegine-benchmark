| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 15.03 ms | 9.29 ms | 8.17 ms | 8.36 ms | 8.71 ms |
| **push_back_mean** | 14.85 ms | 9.25 ms | 8.10 ms | 8.31 ms | 8.62 ms |
| **push_back_median** | 14.77 ms | 9.27 ms | 8.09 ms | 8.29 ms | 8.57 ms |
| **push_back_stddev** | 0.16 ms | 0.05 ms | 0.06 ms | 0.04 ms | 0.08 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 14.71 ms | 9.54 ms | 9.57 ms | 9.38 ms | 9.22 ms |
| **push_front_mean** | 14.70 ms | 9.83 ms | 9.51 ms | 10.18 ms | 9.51 ms |
| **push_front_median** | 14.70 ms | 9.54 ms | 9.50 ms | 9.38 ms | 9.53 ms |
| **push_front_stddev** | 0.01 ms | 0.53 ms | 0.06 ms | 1.78 ms | 0.28 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 7.41 ms | 4.91 ms | 4.43 ms | 5.15 ms | 4.44 ms |
| **insert_middle_mean** | 7.42 ms | 4.92 ms | 4.48 ms | 5.20 ms | 4.56 ms |
| **insert_middle_median** | 7.41 ms | 4.91 ms | 4.48 ms | 5.19 ms | 4.59 ms |
| **insert_middle_stddev** | 0.01 ms | 0.03 ms | 0.06 ms | 0.05 ms | 0.11 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 26.54 ms | 4.86 ms | 4.40 ms | 4.34 ms | 4.41 ms |
| **erase_middle_mean** | 13.98 ms | 5.08 ms | 4.79 ms | 4.32 ms | 4.45 ms |
| **erase_middle_median** | 7.94 ms | 5.01 ms | 4.75 ms | 4.33 ms | 4.44 ms |
| **erase_middle_stddev** | 10.88 ms | 0.26 ms | 0.41 ms | 0.02 ms | 0.04 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 1.33 ms | 0.71 ms | 0.75 ms | 0.79 ms | 0.71 ms |
| **iterate_mean** | 1.42 ms | 0.71 ms | 0.75 ms | 0.91 ms | 0.72 ms |
| **iterate_median** | 1.38 ms | 0.71 ms | 0.75 ms | 0.79 ms | 0.71 ms |
| **iterate_stddev** | 0.12 ms | 0.01 ms | 0.01 ms | 0.22 ms | 0.02 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 72.33 ms | 9.30 ms | 8.09 ms | 8.23 ms | 8.66 ms |
| **clear_mean** | 71.41 ms | 9.54 ms | 8.10 ms | 8.16 ms | 8.59 ms |
| **clear_median** | 71.70 ms | 9.61 ms | 8.09 ms | 8.13 ms | 8.56 ms |
| **clear_stddev** | 1.09 ms | 0.21 ms | 0.03 ms | 0.06 ms | 0.06 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **std::forward_list** (8.17 ms) | **boost::list** (8.36 ms) | **eastl::list** (8.71 ms) |
| **push_front** | **eastl::list** (9.22 ms) | **boost::list** (9.38 ms) | **std::list** (9.54 ms) |
| **insert_middle** | **std::forward_list** (4.43 ms) | **eastl::list** (4.44 ms) | **std::list** (4.91 ms) |
| **erase_middle** | **boost::list** (4.34 ms) | **std::forward_list** (4.40 ms) | **eastl::list** (4.41 ms) |
| **iterate** | **std::list** (0.71 ms) | **eastl::list** (0.71 ms) | **std::forward_list** (0.75 ms) |
| **clear** | **std::forward_list** (8.09 ms) | **boost::list** (8.23 ms) | **eastl::list** (8.66 ms) |

