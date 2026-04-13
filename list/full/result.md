| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.79 ms | 8.04 ms | 7.31 ms | 7.46 ms | 7.55 ms |
| **push_back_mean** | 1.81 ms | 8.14 ms | 7.32 ms | 7.44 ms | 7.64 ms |
| **push_back_median** | 1.80 ms | 8.10 ms | 7.31 ms | 7.46 ms | 7.57 ms |
| **push_back_stddev** | 0.02 ms | 0.13 ms | 0.02 ms | 0.04 ms | 0.14 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 1.78 ms | 8.25 ms | 7.33 ms | 7.93 ms | 7.85 ms |
| **push_front_mean** | 1.80 ms | 8.63 ms | 7.31 ms | 8.16 ms | 8.15 ms |
| **push_front_median** | 1.80 ms | 8.42 ms | 7.32 ms | 8.15 ms | 8.11 ms |
| **push_front_stddev** | 0.01 ms | 0.52 ms | 0.03 ms | 0.23 ms | 0.32 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.94 ms | 4.38 ms | 4.00 ms | 4.07 ms | 4.16 ms |
| **insert_middle_mean** | 0.94 ms | 4.48 ms | 4.00 ms | 4.10 ms | 4.18 ms |
| **insert_middle_median** | 0.94 ms | 4.51 ms | 4.01 ms | 4.11 ms | 4.18 ms |
| **insert_middle_stddev** | 0.00 ms | 0.09 ms | 0.01 ms | 0.02 ms | 0.01 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.94 ms | 4.41 ms | 4.31 ms | 4.03 ms | 4.10 ms |
| **erase_middle_mean** | 0.94 ms | 4.47 ms | 4.99 ms | 4.04 ms | 4.12 ms |
| **erase_middle_median** | 0.94 ms | 4.50 ms | 4.95 ms | 4.04 ms | 4.13 ms |
| **erase_middle_stddev** | 0.01 ms | 0.05 ms | 0.70 ms | 0.01 ms | 0.02 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.90 ms | 0.90 ms | 0.91 ms | 0.89 ms | 0.90 ms |
| **iterate_mean** | 0.91 ms | 1.25 ms | 1.19 ms | 1.21 ms | 1.21 ms |
| **iterate_median** | 0.90 ms | 1.42 ms | 0.92 ms | 1.32 ms | 1.33 ms |
| **iterate_stddev** | 0.01 ms | 0.30 ms | 0.48 ms | 0.27 ms | 0.27 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 1.77 ms | 8.15 ms | 7.32 ms | 7.45 ms | 7.71 ms |
| **clear_mean** | 1.76 ms | 8.12 ms | 7.29 ms | 7.46 ms | 7.76 ms |
| **clear_median** | 1.76 ms | 8.11 ms | 7.31 ms | 7.45 ms | 7.71 ms |
| **clear_stddev** | 0.01 ms | 0.04 ms | 0.04 ms | 0.02 ms | 0.15 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.79 ms) | **std::forward_list** (7.31 ms) | **boost::list** (7.46 ms) |
| **push_front** | **RG::LIST** (1.78 ms) | **std::forward_list** (7.33 ms) | **eastl::list** (7.85 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **std::forward_list** (4.00 ms) | **boost::list** (4.07 ms) |
| **erase_middle** | **RG::LIST** (0.94 ms) | **boost::list** (4.03 ms) | **eastl::list** (4.10 ms) |
| **iterate** | **boost::list** (0.89 ms) | **eastl::list** (0.90 ms) | **RG::LIST** (0.90 ms) |
| **clear** | **RG::LIST** (1.77 ms) | **std::forward_list** (7.32 ms) | **boost::list** (7.45 ms) |

