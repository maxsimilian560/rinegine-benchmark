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

