| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.34 ms | 25.91 ms | 27.92 ms | 2.03 ms | 23.54 ms |
| **push_back_mean** | 3.36 ms | 26.76 ms | 25.40 ms | 2.04 ms | 23.53 ms |
| **push_back_median** | 3.35 ms | 26.03 ms | 25.16 ms | 2.03 ms | 23.49 ms |
| **push_back_stddev** | 0.03 ms | 1.69 ms | 1.35 ms | 0.03 ms | 0.37 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.60 ms | 15.35 ms | 13.72 ms | 3.77 ms | 14.52 ms |
| **push_front_mean** | 3.61 ms | 15.58 ms | 13.90 ms | 3.84 ms | 13.12 ms |
| **push_front_median** | 3.59 ms | 15.43 ms | 13.85 ms | 3.84 ms | 12.93 ms |
| **push_front_stddev** | 0.04 ms | 0.34 ms | 0.17 ms | 0.05 ms | 0.55 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.88 ms | 7.70 ms | 7.04 ms | 1.17 ms | 6.79 ms |
| **insert_middle_mean** | 1.88 ms | 7.81 ms | 7.07 ms | 1.17 ms | 6.85 ms |
| **insert_middle_median** | 1.88 ms | 7.82 ms | 7.06 ms | 1.17 ms | 6.85 ms |
| **insert_middle_stddev** | 0.01 ms | 0.07 ms | 0.03 ms | 0.01 ms | 0.07 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.94 ms | 8.04 ms | 7.40 ms | 1.15 ms | 6.67 ms |
| **erase_middle_mean** | 1.98 ms | 8.20 ms | 7.49 ms | 1.17 ms | 6.83 ms |
| **erase_middle_median** | 1.95 ms | 8.05 ms | 7.44 ms | 1.18 ms | 6.77 ms |
| **erase_middle_stddev** | 0.07 ms | 0.49 ms | 0.18 ms | 0.02 ms | 0.16 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.94 ms | 1.02 ms | 1.02 ms | 0.96 ms | 1.03 ms |
| **iterate_mean** | 0.93 ms | 1.02 ms | 1.03 ms | 0.96 ms | 1.02 ms |
| **iterate_median** | 0.93 ms | 1.02 ms | 1.03 ms | 0.96 ms | 1.02 ms |
| **iterate_stddev** | 0.01 ms | 0.01 ms | 0.01 ms | 0.01 ms | 0.01 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 3.52 ms | 14.67 ms | 13.75 ms | 2.02 ms | 12.92 ms |
| **clear_mean** | 3.54 ms | 15.17 ms | 13.81 ms | 2.04 ms | 12.44 ms |
| **clear_median** | 3.51 ms | 15.17 ms | 13.71 ms | 2.04 ms | 12.46 ms |
| **clear_stddev** | 0.09 ms | 0.31 ms | 0.28 ms | 0.01 ms | 0.22 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (2.03 ms) | **RG::K::LIST** (3.34 ms) | **eastl::list** (23.54 ms) |
| **push_front** | **RG::K::LIST** (3.60 ms) | **boost::list** (3.77 ms) | **std::forward_list** (13.72 ms) |
| **insert_middle** | **boost::list** (1.17 ms) | **RG::K::LIST** (1.88 ms) | **eastl::list** (6.79 ms) |
| **erase_middle** | **boost::list** (1.15 ms) | **RG::K::LIST** (1.94 ms) | **eastl::list** (6.67 ms) |
| **iterate** | **RG::K::LIST** (0.94 ms) | **boost::list** (0.96 ms) | **std::forward_list** (1.02 ms) |
| **clear** | **boost::list** (2.02 ms) | **RG::K::LIST** (3.52 ms) | **eastl::list** (12.92 ms) |

