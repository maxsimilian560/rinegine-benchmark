| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 14.80 ms | 9.31 ms | 8.16 ms | 8.29 ms | 8.72 ms |
| **push_back_mean** | 14.89 ms | 9.25 ms | 8.06 ms | 8.29 ms | 8.66 ms |
| **push_back_median** | 14.88 ms | 9.23 ms | 8.04 ms | 8.29 ms | 8.65 ms |
| **push_back_stddev** | 0.10 ms | 0.05 ms | 0.09 ms | 0.01 ms | 0.05 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 14.70 ms | 9.52 ms | 8.15 ms | 8.40 ms | 9.29 ms |
| **push_front_mean** | 14.78 ms | 9.40 ms | 8.12 ms | 8.36 ms | 8.83 ms |
| **push_front_median** | 14.73 ms | 9.35 ms | 8.11 ms | 8.40 ms | 8.64 ms |
| **push_front_stddev** | 0.12 ms | 0.11 ms | 0.03 ms | 0.06 ms | 0.41 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 7.40 ms | 4.89 ms | 4.33 ms | 4.42 ms | 4.66 ms |
| **insert_middle_mean** | 7.42 ms | 4.92 ms | 4.34 ms | 4.44 ms | 4.65 ms |
| **insert_middle_median** | 7.43 ms | 4.92 ms | 4.33 ms | 4.44 ms | 4.66 ms |
| **insert_middle_stddev** | 0.02 ms | 0.02 ms | 0.01 ms | 0.02 ms | 0.02 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 28.86 ms | 4.90 ms | 4.40 ms | 4.25 ms | 4.42 ms |
| **erase_middle_mean** | 14.78 ms | 4.92 ms | 4.75 ms | 4.26 ms | 4.45 ms |
| **erase_middle_median** | 7.98 ms | 4.91 ms | 4.70 ms | 4.26 ms | 4.46 ms |
| **erase_middle_stddev** | 12.20 ms | 0.03 ms | 0.37 ms | 0.01 ms | 0.03 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 1.30 ms | 0.65 ms | 0.65 ms | 0.73 ms | 0.64 ms |
| **iterate_mean** | 1.33 ms | 0.67 ms | 0.66 ms | 0.78 ms | 0.65 ms |
| **iterate_median** | 1.30 ms | 0.65 ms | 0.65 ms | 0.73 ms | 0.64 ms |
| **iterate_stddev** | 0.09 ms | 0.04 ms | 0.02 ms | 0.09 ms | 0.02 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 70.31 ms | 9.32 ms | 8.13 ms | 8.17 ms | 8.60 ms |
| **clear_mean** | 69.67 ms | 9.29 ms | 8.11 ms | 8.14 ms | 8.58 ms |
| **clear_median** | 70.31 ms | 9.30 ms | 8.13 ms | 8.14 ms | 8.60 ms |
| **clear_stddev** | 3.37 ms | 0.03 ms | 0.05 ms | 0.02 ms | 0.03 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **std::forward_list** (8.16 ms) | **boost::list** (8.29 ms) | **eastl::list** (8.72 ms) |
| **push_front** | **std::forward_list** (8.15 ms) | **boost::list** (8.40 ms) | **eastl::list** (9.29 ms) |
| **insert_middle** | **std::forward_list** (4.33 ms) | **boost::list** (4.42 ms) | **eastl::list** (4.66 ms) |
| **erase_middle** | **boost::list** (4.25 ms) | **std::forward_list** (4.40 ms) | **eastl::list** (4.42 ms) |
| **iterate** | **eastl::list** (0.64 ms) | **std::forward_list** (0.65 ms) | **std::list** (0.65 ms) |
| **clear** | **std::forward_list** (8.13 ms) | **boost::list** (8.17 ms) | **eastl::list** (8.60 ms) |

