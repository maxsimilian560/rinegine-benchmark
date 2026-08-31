| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.53 ms | 18.04 ms | 17.03 ms | 1.45 ms | 16.87 ms |
| **push_back_mean** | 2.65 ms | 18.17 ms | 16.95 ms | 1.60 ms | 16.63 ms |
| **push_back_median** | 2.65 ms | 18.13 ms | 16.75 ms | 1.62 ms | 16.62 ms |
| **push_back_stddev** | 0.06 ms | 0.27 ms | 0.50 ms | 0.14 ms | 0.22 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.69 ms | 11.72 ms | 9.69 ms | 2.46 ms | 9.10 ms |
| **push_front_mean** | 2.81 ms | 10.90 ms | 10.40 ms | 2.51 ms | 10.24 ms |
| **push_front_median** | 2.74 ms | 10.68 ms | 10.06 ms | 2.50 ms | 9.75 ms |
| **push_front_stddev** | 0.19 ms | 0.47 ms | 0.98 ms | 0.16 ms | 1.71 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.43 ms | 5.35 ms | 4.85 ms | 0.80 ms | 5.24 ms |
| **insert_middle_mean** | 1.59 ms | 5.44 ms | 4.92 ms | 0.81 ms | 4.79 ms |
| **insert_middle_median** | 1.51 ms | 5.45 ms | 4.94 ms | 0.81 ms | 4.65 ms |
| **insert_middle_stddev** | 0.25 ms | 0.08 ms | 0.07 ms | 0.01 ms | 0.33 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.39 ms | 7.13 ms | 7.18 ms | 0.81 ms | 6.91 ms |
| **erase_middle_mean** | 1.46 ms | 7.52 ms | 7.15 ms | 0.83 ms | 6.95 ms |
| **erase_middle_median** | 1.44 ms | 7.47 ms | 7.08 ms | 0.82 ms | 6.78 ms |
| **erase_middle_stddev** | 0.08 ms | 0.40 ms | 0.46 ms | 0.01 ms | 0.70 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.65 ms | 0.87 ms | 0.78 ms | 0.68 ms | 0.70 ms |
| **iterate_mean** | 0.70 ms | 0.88 ms | 0.86 ms | 0.68 ms | 0.73 ms |
| **iterate_median** | 0.69 ms | 0.88 ms | 0.85 ms | 0.68 ms | 0.72 ms |
| **iterate_stddev** | 0.05 ms | 0.04 ms | 0.06 ms | 0.02 ms | 0.03 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.54 ms | 16.14 ms | 15.12 ms | 1.44 ms | 13.93 ms |
| **clear_mean** | 2.53 ms | 16.01 ms | 15.42 ms | 1.47 ms | 14.53 ms |
| **clear_median** | 2.53 ms | 16.03 ms | 15.26 ms | 1.46 ms | 14.43 ms |
| **clear_stddev** | 0.03 ms | 0.22 ms | 0.61 ms | 0.03 ms | 0.88 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (1.45 ms) | **RG::K::LIST** (2.53 ms) | **eastl::list** (16.87 ms) |
| **push_front** | **boost::list** (2.46 ms) | **RG::K::LIST** (2.69 ms) | **eastl::list** (9.10 ms) |
| **insert_middle** | **boost::list** (0.80 ms) | **RG::K::LIST** (1.43 ms) | **std::forward_list** (4.85 ms) |
| **erase_middle** | **boost::list** (0.81 ms) | **RG::K::LIST** (1.39 ms) | **eastl::list** (6.91 ms) |
| **iterate** | **RG::K::LIST** (0.65 ms) | **boost::list** (0.68 ms) | **eastl::list** (0.70 ms) |
| **clear** | **boost::list** (1.44 ms) | **RG::K::LIST** (2.54 ms) | **eastl::list** (13.93 ms) |

