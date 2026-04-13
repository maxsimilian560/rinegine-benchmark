| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.40 ms | 23.33 ms | 23.62 ms | 21.94 ms | 22.05 ms |
| **push_back_mean** | 3.54 ms | 22.27 ms | 21.68 ms | 21.04 ms | 21.85 ms |
| **push_back_median** | 3.40 ms | 23.33 ms | 21.35 ms | 21.43 ms | 22.05 ms |
| **push_back_stddev** | 0.45 ms | 1.86 ms | 1.80 ms | 1.15 ms | 0.58 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.81 ms | 22.24 ms | 22.57 ms | 29.21 ms | 21.90 ms |
| **push_front_mean** | 3.59 ms | 23.16 ms | 23.03 ms | 24.65 ms | 22.20 ms |
| **push_front_median** | 3.81 ms | 23.37 ms | 22.57 ms | 23.36 ms | 21.90 ms |
| **push_front_stddev** | 0.40 ms | 0.84 ms | 0.93 ms | 4.08 ms | 0.59 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.12 ms | 12.05 ms | 11.29 ms | 11.14 ms | 12.92 ms |
| **insert_middle_mean** | 1.15 ms | 10.73 ms | 11.99 ms | 11.08 ms | 13.40 ms |
| **insert_middle_median** | 1.16 ms | 10.91 ms | 12.18 ms | 11.10 ms | 12.92 ms |
| **insert_middle_stddev** | 0.02 ms | 1.42 ms | 0.63 ms | 0.06 ms | 1.83 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.20 ms | 10.76 ms | 11.02 ms | 10.96 ms | 10.19 ms |
| **erase_middle_mean** | 1.32 ms | 10.57 ms | 10.89 ms | 11.01 ms | 10.40 ms |
| **erase_middle_median** | 1.35 ms | 10.76 ms | 10.87 ms | 10.96 ms | 10.19 ms |
| **erase_middle_stddev** | 0.11 ms | 1.32 ms | 0.12 ms | 0.61 ms | 0.43 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.98 ms | 0.92 ms | 1.15 ms | 0.97 ms | 0.93 ms |
| **iterate_mean** | 0.99 ms | 0.97 ms | 1.08 ms | 0.98 ms | 0.95 ms |
| **iterate_median** | 0.98 ms | 0.95 ms | 1.07 ms | 0.97 ms | 0.95 ms |
| **iterate_stddev** | 0.04 ms | 0.05 ms | 0.07 ms | 0.02 ms | 0.02 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 4.27 ms | 27.17 ms | 28.43 ms | 22.85 ms | 17.49 ms |
| **clear_mean** | 3.89 ms | 30.02 ms | 29.57 ms | 23.69 ms | 18.81 ms |
| **clear_median** | 4.27 ms | 30.97 ms | 29.66 ms | 23.97 ms | 18.23 ms |
| **clear_stddev** | 0.71 ms | 2.52 ms | 1.10 ms | 0.74 ms | 1.68 ms |
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (3.40 ms) | **boost::list** (21.94 ms) | **eastl::list** (22.05 ms) |
| **push_front** | **RG::LIST** (3.81 ms) | **eastl::list** (21.90 ms) | **std::list** (22.24 ms) |
| **insert_middle** | **RG::LIST** (1.12 ms) | **boost::list** (11.14 ms) | **std::forward_list** (11.29 ms) |
| **erase_middle** | **RG::LIST** (1.20 ms) | **eastl::list** (10.19 ms) | **std::list** (10.76 ms) |
| **iterate** | **std::list** (0.92 ms) | **eastl::list** (0.93 ms) | **boost::list** (0.97 ms) |
| **clear** | **RG::LIST** (4.27 ms) | **eastl::list** (17.49 ms) | **boost::list** (22.85 ms) |

