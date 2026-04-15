| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.79 ms | 8.04 ms | 7.26 ms | 7.44 ms | 7.51 ms |
| **push_back_mean** | 1.80 ms | 8.11 ms | 7.30 ms | 7.52 ms | 7.61 ms |
| **push_back_median** | 1.80 ms | 8.09 ms | 7.31 ms | 7.49 ms | 7.52 ms |
| **push_back_stddev** | 0.01 ms | 0.08 ms | 0.04 ms | 0.09 ms | 0.17 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.78 ms | 8.13 ms | 7.37 ms | 7.94 ms | 7.91 ms |
| **push_front_mean** | 1.80 ms | 8.60 ms | 7.35 ms | 8.17 ms | 8.12 ms |
| **push_front_median** | 1.79 ms | 8.42 ms | 7.36 ms | 8.11 ms | 8.11 ms |
| **push_front_stddev** | 0.02 ms | 0.59 ms | 0.02 ms | 0.28 ms | 0.21 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.95 ms | 4.39 ms | 4.15 ms | 4.12 ms | 4.16 ms |
| **insert_middle_mean** | 0.95 ms | 4.47 ms | 4.10 ms | 4.12 ms | 4.18 ms |
| **insert_middle_median** | 0.95 ms | 4.48 ms | 4.11 ms | 4.12 ms | 4.19 ms |
| **insert_middle_stddev** | 0.00 ms | 0.07 ms | 0.06 ms | 0.00 ms | 0.02 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.97 ms | 4.37 ms | 4.35 ms | 4.04 ms | 4.10 ms |
| **erase_middle_mean** | 0.96 ms | 4.48 ms | 5.05 ms | 4.04 ms | 4.12 ms |
| **erase_middle_median** | 0.96 ms | 4.53 ms | 4.97 ms | 4.04 ms | 4.14 ms |
| **erase_middle_stddev** | 0.01 ms | 0.10 ms | 0.74 ms | 0.00 ms | 0.02 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.96 ms | 0.92 ms | 0.95 ms | 0.91 ms | 0.94 ms |
| **iterate_mean** | 0.95 ms | 1.33 ms | 1.22 ms | 1.32 ms | 1.34 ms |
| **iterate_median** | 0.96 ms | 1.50 ms | 0.97 ms | 1.49 ms | 1.50 ms |
| **iterate_stddev** | 0.01 ms | 0.36 ms | 0.45 ms | 0.36 ms | 0.35 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.73 ms | 8.12 ms | 7.34 ms | 7.42 ms | 7.61 ms |
| **clear_mean** | 1.74 ms | 8.11 ms | 7.26 ms | 7.41 ms | 7.61 ms |
| **clear_median** | 1.74 ms | 8.12 ms | 7.24 ms | 7.41 ms | 7.61 ms |
| **clear_stddev** | 0.00 ms | 0.01 ms | 0.07 ms | 0.01 ms | 0.01 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.79 ms) | **std::forward_list** (7.26 ms) | **boost::list** (7.44 ms) |
| **push_front** | **RG::LIST** (1.78 ms) | **std::forward_list** (7.37 ms) | **eastl::list** (7.91 ms) |
| **insert_middle** | **RG::LIST** (0.95 ms) | **boost::list** (4.12 ms) | **std::forward_list** (4.15 ms) |
| **erase_middle** | **RG::LIST** (0.97 ms) | **boost::list** (4.04 ms) | **eastl::list** (4.10 ms) |
| **iterate** | **boost::list** (0.91 ms) | **std::list** (0.92 ms) | **eastl::list** (0.94 ms) |
| **clear** | **RG::LIST** (1.73 ms) | **std::forward_list** (7.34 ms) | **boost::list** (7.42 ms) |

