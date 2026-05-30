| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.69 ms | 11.02 ms | 10.46 ms | 10.28 ms | 9.57 ms |
| **push_back_mean** | 1.73 ms | 11.05 ms | 10.26 ms | 10.33 ms | 9.54 ms |
| **push_back_median** | 1.69 ms | 11.02 ms | 10.16 ms | 10.29 ms | 9.56 ms |
| **push_back_stddev** | 0.09 ms | 0.06 ms | 0.18 ms | 0.08 ms | 0.05 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.65 ms | 11.30 ms | 10.29 ms | 10.34 ms | 10.00 ms |
| **push_front_mean** | 1.66 ms | 11.23 ms | 10.27 ms | 10.48 ms | 9.81 ms |
| **push_front_median** | 1.65 ms | 11.20 ms | 10.29 ms | 10.51 ms | 9.86 ms |
| **push_front_stddev** | 0.02 ms | 0.06 ms | 0.05 ms | 0.13 ms | 0.22 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.62 ms | 5.75 ms | 5.24 ms | 5.30 ms | 4.94 ms |
| **insert_middle_mean** | 0.62 ms | 5.73 ms | 5.25 ms | 5.31 ms | 5.02 ms |
| **insert_middle_median** | 0.62 ms | 5.72 ms | 5.24 ms | 5.31 ms | 4.94 ms |
| **insert_middle_stddev** | 0.00 ms | 0.02 ms | 0.01 ms | 0.01 ms | 0.15 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.64 ms | 5.72 ms | 5.17 ms | 5.30 ms | 4.81 ms |
| **erase_middle_mean** | 0.65 ms | 5.74 ms | 5.22 ms | 5.27 ms | 4.83 ms |
| **erase_middle_median** | 0.64 ms | 5.72 ms | 5.22 ms | 5.25 ms | 4.83 ms |
| **erase_middle_stddev** | 0.00 ms | 0.07 ms | 0.05 ms | 0.03 ms | 0.01 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.78 ms | 0.74 ms | 0.74 ms | 0.74 ms | 0.74 ms |
| **iterate_mean** | 0.76 ms | 0.74 ms | 0.75 ms | 0.76 ms | 0.74 ms |
| **iterate_median** | 0.75 ms | 0.74 ms | 0.74 ms | 0.75 ms | 0.74 ms |
| **iterate_stddev** | 0.02 ms | 0.01 ms | 0.01 ms | 0.03 ms | 0.00 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.58 ms | 11.11 ms | 10.34 ms | 10.39 ms | 9.60 ms |
| **clear_mean** | 1.60 ms | 11.11 ms | 10.24 ms | 10.35 ms | 9.56 ms |
| **clear_median** | 1.58 ms | 11.11 ms | 10.21 ms | 10.36 ms | 9.56 ms |
| **clear_stddev** | 0.04 ms | 0.01 ms | 0.09 ms | 0.05 ms | 0.04 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.69 ms) | **eastl::list** (9.57 ms) | **boost::list** (10.28 ms) |
| **push_front** | **RG::LIST** (1.65 ms) | **eastl::list** (10.00 ms) | **std::forward_list** (10.29 ms) |
| **insert_middle** | **RG::LIST** (0.62 ms) | **eastl::list** (4.94 ms) | **std::forward_list** (5.24 ms) |
| **erase_middle** | **RG::LIST** (0.64 ms) | **eastl::list** (4.81 ms) | **std::forward_list** (5.17 ms) |
| **iterate** | **std::forward_list** (0.74 ms) | **std::list** (0.74 ms) | **eastl::list** (0.74 ms) |
| **clear** | **RG::LIST** (1.58 ms) | **eastl::list** (9.60 ms) | **std::forward_list** (10.34 ms) |

