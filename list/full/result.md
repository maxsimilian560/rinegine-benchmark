| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.30 ms | 9.44 ms | 8.11 ms | 8.31 ms | 8.98 ms |
| **push_back_mean** | 2.35 ms | 9.42 ms | 8.12 ms | 8.25 ms | 8.74 ms |
| **push_back_median** | 2.33 ms | 9.41 ms | 8.11 ms | 8.30 ms | 8.64 ms |
| **push_back_stddev** | 0.07 ms | 0.02 ms | 0.04 ms | 0.09 ms | 0.21 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.45 ms | 10.00 ms | 9.88 ms | 9.72 ms | 9.36 ms |
| **push_front_mean** | 2.51 ms | 10.12 ms | 9.68 ms | 9.48 ms | 9.56 ms |
| **push_front_median** | 2.53 ms | 10.13 ms | 9.78 ms | 9.69 ms | 9.36 ms |
| **push_front_stddev** | 0.05 ms | 0.12 ms | 0.26 ms | 0.39 ms | 0.68 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 0.87 ms | 5.10 ms | 4.35 ms | 4.32 ms | 4.47 ms |
| **insert_middle_mean** | 0.87 ms | 5.00 ms | 4.39 ms | 4.37 ms | 4.55 ms |
| **insert_middle_median** | 0.87 ms | 4.99 ms | 4.37 ms | 4.36 ms | 4.52 ms |
| **insert_middle_stddev** | 0.00 ms | 0.10 ms | 0.05 ms | 0.06 ms | 0.10 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 0.94 ms | 4.95 ms | 4.40 ms | 4.33 ms | 4.46 ms |
| **erase_middle_mean** | 0.94 ms | 4.94 ms | 4.77 ms | 4.35 ms | 4.42 ms |
| **erase_middle_median** | 0.94 ms | 4.95 ms | 4.67 ms | 4.33 ms | 4.41 ms |
| **erase_middle_stddev** | 0.02 ms | 0.02 ms | 0.43 ms | 0.03 ms | 0.04 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.67 ms | 0.66 ms | 0.67 ms | 0.73 ms | 0.68 ms |
| **iterate_mean** | 0.68 ms | 0.66 ms | 1.29 ms | 0.74 ms | 0.68 ms |
| **iterate_median** | 0.67 ms | 0.66 ms | 0.67 ms | 0.73 ms | 0.68 ms |
| **iterate_stddev** | 0.03 ms | 0.00 ms | 1.07 ms | 0.01 ms | 0.01 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.60 ms | 9.39 ms | 8.54 ms | 8.37 ms | 8.69 ms |
| **clear_mean** | 2.55 ms | 9.30 ms | 8.39 ms | 8.34 ms | 8.53 ms |
| **clear_median** | 2.60 ms | 9.25 ms | 8.36 ms | 8.33 ms | 8.46 ms |
| **clear_stddev** | 0.08 ms | 0.08 ms | 0.13 ms | 0.03 ms | 0.13 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.30 ms) | **std::forward_list** (8.11 ms) | **boost::list** (8.31 ms) |
| **push_front** | **RG::LIST** (2.45 ms) | **eastl::list** (9.36 ms) | **boost::list** (9.72 ms) |
| **insert_middle** | **RG::LIST** (0.87 ms) | **boost::list** (4.32 ms) | **std::forward_list** (4.35 ms) |
| **erase_middle** | **RG::LIST** (0.94 ms) | **boost::list** (4.33 ms) | **std::forward_list** (4.40 ms) |
| **iterate** | **std::list** (0.66 ms) | **RG::LIST** (0.67 ms) | **std::forward_list** (0.67 ms) |
| **clear** | **RG::LIST** (2.60 ms) | **boost::list** (8.37 ms) | **std::forward_list** (8.54 ms) |

