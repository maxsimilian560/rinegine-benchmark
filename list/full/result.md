| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.41 ms | 8.89 ms | 7.70 ms | 1.87 ms | 8.22 ms |
| **push_back_mean** | 3.40 ms | 8.90 ms | 7.67 ms | 1.84 ms | 8.33 ms |
| **push_back_median** | 3.40 ms | 8.87 ms | 7.68 ms | 1.84 ms | 8.25 ms |
| **push_back_stddev** | 0.01 ms | 0.10 ms | 0.04 ms | 0.02 ms | 0.22 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.43 ms | 8.94 ms | 7.73 ms | 2.28 ms | 9.07 ms |
| **push_front_mean** | 3.42 ms | 10.02 ms | 8.22 ms | 2.11 ms | 9.65 ms |
| **push_front_median** | 3.41 ms | 10.10 ms | 8.14 ms | 2.09 ms | 9.52 ms |
| **push_front_stddev** | 0.01 ms | 0.82 ms | 0.32 ms | 0.14 ms | 0.77 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.89 ms | 4.78 ms | 4.07 ms | 1.09 ms | 4.32 ms |
| **insert_middle_mean** | 1.88 ms | 4.77 ms | 4.19 ms | 1.09 ms | 4.44 ms |
| **insert_middle_median** | 1.86 ms | 4.78 ms | 4.12 ms | 1.09 ms | 4.40 ms |
| **insert_middle_stddev** | 0.03 ms | 0.08 ms | 0.14 ms | 0.00 ms | 0.12 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.80 ms | 4.70 ms | 4.69 ms | 1.09 ms | 4.38 ms |
| **erase_middle_mean** | 1.80 ms | 4.67 ms | 6.08 ms | 1.09 ms | 4.38 ms |
| **erase_middle_median** | 1.80 ms | 4.66 ms | 6.43 ms | 1.09 ms | 4.39 ms |
| **erase_middle_stddev** | 0.00 ms | 0.03 ms | 1.42 ms | 0.00 ms | 0.04 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.81 ms | 0.91 ms | 0.83 ms | 0.75 ms | 0.89 ms |
| **iterate_mean** | 0.82 ms | 0.94 ms | 0.90 ms | 0.74 ms | 0.99 ms |
| **iterate_median** | 0.81 ms | 0.91 ms | 0.90 ms | 0.74 ms | 0.95 ms |
| **iterate_stddev** | 0.01 ms | 0.08 ms | 0.06 ms | 0.01 ms | 0.10 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 3.39 ms | 8.90 ms | 7.91 ms | 1.87 ms | 8.16 ms |
| **clear_mean** | 3.40 ms | 8.81 ms | 7.74 ms | 1.87 ms | 8.16 ms |
| **clear_median** | 3.40 ms | 8.77 ms | 7.68 ms | 1.86 ms | 8.16 ms |
| **clear_stddev** | 0.01 ms | 0.08 ms | 0.19 ms | 0.01 ms | 0.02 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (1.87 ms) | **RG::K::LIST** (3.41 ms) | **std::forward_list** (7.70 ms) |
| **push_front** | **boost::list** (2.28 ms) | **RG::K::LIST** (3.43 ms) | **std::forward_list** (7.73 ms) |
| **insert_middle** | **boost::list** (1.09 ms) | **RG::K::LIST** (1.89 ms) | **std::forward_list** (4.07 ms) |
| **erase_middle** | **boost::list** (1.09 ms) | **RG::K::LIST** (1.80 ms) | **eastl::list** (4.38 ms) |
| **iterate** | **boost::list** (0.75 ms) | **RG::K::LIST** (0.81 ms) | **std::forward_list** (0.83 ms) |
| **clear** | **boost::list** (1.87 ms) | **RG::K::LIST** (3.39 ms) | **std::forward_list** (7.91 ms) |

