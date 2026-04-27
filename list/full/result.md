| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.44 ms | 9.43 ms | 8.10 ms | 8.22 ms | 8.61 ms |
| **push_back_mean** | 2.40 ms | 9.40 ms | 8.09 ms | 8.16 ms | 8.71 ms |
| **push_back_median** | 2.44 ms | 9.41 ms | 8.09 ms | 8.14 ms | 8.61 ms |
| **push_back_stddev** | 0.10 ms | 0.03 ms | 0.01 ms | 0.05 ms | 0.21 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.54 ms | 9.49 ms | 8.26 ms | 8.31 ms | 8.66 ms |
| **push_front_mean** | 2.51 ms | 9.48 ms | 8.21 ms | 8.40 ms | 8.62 ms |
| **push_front_median** | 2.52 ms | 9.49 ms | 8.25 ms | 8.39 ms | 8.62 ms |
| **push_front_stddev** | 0.04 ms | 0.04 ms | 0.08 ms | 0.10 ms | 0.03 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.88 ms | 5.04 ms | 4.33 ms | 4.34 ms | 4.48 ms |
| **insert_middle_mean** | 0.88 ms | 4.98 ms | 4.34 ms | 4.34 ms | 4.53 ms |
| **insert_middle_median** | 0.88 ms | 4.97 ms | 4.33 ms | 4.34 ms | 4.53 ms |
| **insert_middle_stddev** | 0.00 ms | 0.05 ms | 0.03 ms | 0.05 ms | 0.05 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.91 ms | 4.89 ms | 4.37 ms | 4.33 ms | 4.37 ms |
| **erase_middle_mean** | 0.91 ms | 4.89 ms | 4.76 ms | 4.34 ms | 4.39 ms |
| **erase_middle_median** | 0.91 ms | 4.89 ms | 4.67 ms | 4.33 ms | 4.38 ms |
| **erase_middle_stddev** | 0.00 ms | 0.00 ms | 0.45 ms | 0.03 ms | 0.03 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.65 ms | 0.65 ms | 0.66 ms | 0.71 ms | 0.65 ms |
| **iterate_mean** | 0.65 ms | 0.73 ms | 0.75 ms | 0.74 ms | 0.68 ms |
| **iterate_median** | 0.65 ms | 0.65 ms | 0.66 ms | 0.71 ms | 0.65 ms |
| **iterate_stddev** | 0.00 ms | 0.14 ms | 0.16 ms | 0.05 ms | 0.05 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.30 ms | 9.29 ms | 8.33 ms | 8.32 ms | 8.45 ms |
| **clear_mean** | 2.33 ms | 9.28 ms | 8.29 ms | 8.30 ms | 8.44 ms |
| **clear_median** | 2.30 ms | 9.29 ms | 8.31 ms | 8.31 ms | 8.45 ms |
| **clear_stddev** | 0.06 ms | 0.02 ms | 0.05 ms | 0.02 ms | 0.01 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.44 ms) | **std::forward_list** (8.10 ms) | **boost::list** (8.22 ms) |
| **push_front** | **RG::LIST** (2.54 ms) | **std::forward_list** (8.26 ms) | **boost::list** (8.31 ms) |
| **insert_middle** | **RG::LIST** (0.88 ms) | **std::forward_list** (4.33 ms) | **boost::list** (4.34 ms) |
| **erase_middle** | **RG::LIST** (0.91 ms) | **boost::list** (4.33 ms) | **std::forward_list** (4.37 ms) |
| **iterate** | **std::list** (0.65 ms) | **eastl::list** (0.65 ms) | **RG::LIST** (0.65 ms) |
| **clear** | **RG::LIST** (2.30 ms) | **boost::list** (8.32 ms) | **std::forward_list** (8.33 ms) |

