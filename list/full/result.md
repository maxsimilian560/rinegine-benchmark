| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.27 ms | 9.48 ms | 8.15 ms | 8.20 ms | 8.67 ms |
| **push_back_mean** | 2.34 ms | 9.42 ms | 8.13 ms | 8.15 ms | 8.61 ms |
| **push_back_median** | 2.28 ms | 9.39 ms | 8.15 ms | 8.14 ms | 8.59 ms |
| **push_back_stddev** | 0.11 ms | 0.05 ms | 0.04 ms | 0.04 ms | 0.05 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.42 ms | 9.71 ms | 8.36 ms | 8.68 ms | 8.96 ms |
| **push_front_mean** | 2.40 ms | 9.69 ms | 8.32 ms | 8.57 ms | 8.83 ms |
| **push_front_median** | 2.41 ms | 9.71 ms | 8.36 ms | 8.62 ms | 8.80 ms |
| **push_front_stddev** | 0.02 ms | 0.06 ms | 0.07 ms | 0.14 ms | 0.11 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.98 ms | 5.04 ms | 4.25 ms | 4.29 ms | 4.43 ms |
| **insert_middle_mean** | 0.98 ms | 4.97 ms | 4.30 ms | 4.34 ms | 4.48 ms |
| **insert_middle_median** | 0.98 ms | 4.94 ms | 4.32 ms | 4.34 ms | 4.51 ms |
| **insert_middle_stddev** | 0.01 ms | 0.06 ms | 0.04 ms | 0.05 ms | 0.05 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.92 ms | 4.89 ms | 4.51 ms | 4.32 ms | 4.40 ms |
| **erase_middle_mean** | 0.92 ms | 4.91 ms | 4.82 ms | 4.34 ms | 4.41 ms |
| **erase_middle_median** | 0.92 ms | 4.90 ms | 4.69 ms | 4.33 ms | 4.40 ms |
| **erase_middle_stddev** | 0.00 ms | 0.02 ms | 0.39 ms | 0.03 ms | 0.02 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.66 ms | 0.67 ms | 0.67 ms | 0.72 ms | 0.66 ms |
| **iterate_mean** | 0.66 ms | 0.67 ms | 1.07 ms | 0.73 ms | 0.78 ms |
| **iterate_median** | 0.66 ms | 0.67 ms | 0.67 ms | 0.72 ms | 0.66 ms |
| **iterate_stddev** | 0.00 ms | 0.02 ms | 0.70 ms | 0.03 ms | 0.21 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.55 ms | 9.26 ms | 8.34 ms | 8.32 ms | 8.46 ms |
| **clear_mean** | 2.49 ms | 9.34 ms | 8.30 ms | 8.30 ms | 8.44 ms |
| **clear_median** | 2.53 ms | 9.27 ms | 8.28 ms | 8.29 ms | 8.43 ms |
| **clear_stddev** | 0.09 ms | 0.13 ms | 0.03 ms | 0.02 ms | 0.02 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.27 ms) | **std::forward_list** (8.15 ms) | **boost::list** (8.20 ms) |
| **push_front** | **RG::LIST** (2.42 ms) | **std::forward_list** (8.36 ms) | **boost::list** (8.68 ms) |
| **insert_middle** | **RG::LIST** (0.98 ms) | **std::forward_list** (4.25 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::LIST** (0.92 ms) | **boost::list** (4.32 ms) | **eastl::list** (4.40 ms) |
| **iterate** | **RG::LIST** (0.66 ms) | **eastl::list** (0.66 ms) | **std::forward_list** (0.67 ms) |
| **clear** | **RG::LIST** (2.55 ms) | **boost::list** (8.32 ms) | **std::forward_list** (8.34 ms) |

