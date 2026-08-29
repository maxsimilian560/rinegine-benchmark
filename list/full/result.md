| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
<<<<<<< HEAD
| **push_back** | 2.38 ms | 17.98 ms | 17.64 ms | 17.02 ms | 16.34 ms |
| **push_back_mean** | 5.89 ms | 17.78 ms | 16.84 ms | 17.92 ms | 16.36 ms |
| **push_back_median** | 2.28 ms | 17.32 ms | 16.59 ms | 17.28 ms | 16.27 ms |
| **push_back_stddev** | 11.26 ms | 0.91 ms | 0.53 ms | 1.66 ms | 0.34 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 2.29 ms | 10.54 ms | 9.86 ms | 9.80 ms | 8.91 ms |
| **push_front_mean** | 2.26 ms | 10.67 ms | 9.65 ms | 10.79 ms | 9.13 ms |
| **push_front_median** | 2.25 ms | 10.62 ms | 9.59 ms | 9.72 ms | 8.92 ms |
| **push_front_stddev** | 0.04 ms | 0.19 ms | 0.25 ms | 2.34 ms | 0.73 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.33 ms | 5.42 ms | 4.81 ms | 4.87 ms | 4.42 ms |
| **insert_middle_mean** | 1.26 ms | 5.39 ms | 4.92 ms | 4.92 ms | 4.49 ms |
| **insert_middle_median** | 1.24 ms | 5.36 ms | 4.88 ms | 4.89 ms | 4.44 ms |
| **insert_middle_stddev** | 0.07 ms | 0.12 ms | 0.11 ms | 0.10 ms | 0.16 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.22 ms | 9.87 ms | 6.48 ms | 7.02 ms | 6.75 ms |
| **erase_middle_mean** | 1.25 ms | 8.61 ms | 8.04 ms | 6.68 ms | 6.26 ms |
| **erase_middle_median** | 1.23 ms | 7.24 ms | 7.30 ms | 6.66 ms | 6.17 ms |
| **erase_middle_stddev** | 0.05 ms | 2.17 ms | 1.81 ms | 0.17 ms | 0.26 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.67 ms | 0.82 ms | 0.79 ms | 0.79 ms | 0.78 ms |
| **iterate_mean** | 0.67 ms | 0.80 ms | 0.80 ms | 0.79 ms | 0.81 ms |
| **iterate_median** | 0.67 ms | 0.80 ms | 0.79 ms | 0.79 ms | 0.79 ms |
| **iterate_stddev** | 0.01 ms | 0.02 ms | 0.02 ms | 0.02 ms | 0.05 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 2.24 ms | 15.88 ms | 15.20 ms | 15.07 ms | 14.26 ms |
| **clear_mean** | 2.28 ms | 15.91 ms | 15.29 ms | 15.19 ms | 14.17 ms |
| **clear_median** | 2.27 ms | 15.89 ms | 15.18 ms | 15.10 ms | 14.11 ms |
| **clear_stddev** | 0.05 ms | 0.12 ms | 0.40 ms | 0.25 ms | 0.21 ms |
=======
| **push_back** | 3.20 ms | 9.88 ms | 8.30 ms | 8.29 ms | 9.41 ms |
| **push_back_mean** | 3.20 ms | 9.80 ms | 8.04 ms | 8.16 ms | 9.05 ms |
| **push_back_median** | 3.20 ms | 9.82 ms | 7.92 ms | 8.17 ms | 8.99 ms |
| **push_back_stddev** | 0.00 ms | 0.08 ms | 0.22 ms | 0.14 ms | 0.33 ms |
| **push_back_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **push_front** | 3.19 ms | 9.96 ms | 11.24 ms | 10.99 ms | 11.05 ms |
| **push_front_mean** | 3.19 ms | 10.93 ms | 10.65 ms | 10.84 ms | 11.66 ms |
| **push_front_median** | 3.19 ms | 10.83 ms | 10.86 ms | 10.99 ms | 11.74 ms |
| **push_front_stddev** | 0.00 ms | 1.03 ms | 0.72 ms | 0.63 ms | 0.57 ms |
| **push_front_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **insert_middle** | 1.78 ms | 4.96 ms | 4.15 ms | 4.55 ms | 5.20 ms |
| **insert_middle_mean** | 1.78 ms | 5.07 ms | 4.27 ms | 4.69 ms | 4.94 ms |
| **insert_middle_median** | 1.78 ms | 5.01 ms | 4.31 ms | 4.68 ms | 4.90 ms |
| **insert_middle_stddev** | 0.00 ms | 0.14 ms | 0.11 ms | 0.15 ms | 0.25 ms |
| **insert_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **erase_middle** | 1.69 ms | 5.12 ms | 5.24 ms | 4.31 ms | 4.59 ms |
| **erase_middle_mean** | 1.67 ms | 5.24 ms | 6.85 ms | 4.55 ms | 4.87 ms |
| **erase_middle_median** | 1.67 ms | 5.12 ms | 5.81 ms | 4.56 ms | 4.99 ms |
| **erase_middle_stddev** | 0.01 ms | 0.33 ms | 2.31 ms | 0.24 ms | 0.24 ms |
| **erase_middle_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **iterate** | 0.90 ms | 0.91 ms | 0.93 ms | 0.81 ms | 0.91 ms |
| **iterate_mean** | 0.90 ms | 0.96 ms | 0.93 ms | 0.85 ms | 0.91 ms |
| **iterate_median** | 0.90 ms | 0.91 ms | 0.93 ms | 0.82 ms | 0.91 ms |
| **iterate_stddev** | 0.00 ms | 0.07 ms | 0.00 ms | 0.06 ms | 0.00 ms |
| **iterate_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |
| **clear** | 3.19 ms | 9.90 ms | 8.50 ms | 8.62 ms | 9.27 ms |
| **clear_mean** | 3.19 ms | 9.93 ms | 8.45 ms | 8.48 ms | 9.11 ms |
| **clear_median** | 3.19 ms | 9.90 ms | 8.50 ms | 8.46 ms | 9.27 ms |
| **clear_stddev** | 0.00 ms | 0.19 ms | 0.10 ms | 0.13 ms | 0.28 ms |
>>>>>>> 7730f926e2e6f41a6f5cff778ec94f90782ac7b0
| **clear_cv** | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms | 0.00 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
<<<<<<< HEAD
| **push_back** | **RG::K::LIST** (2.38 ms) | **eastl::list** (16.34 ms) | **boost::list** (17.02 ms) |
| **push_front** | **RG::K::LIST** (2.29 ms) | **eastl::list** (8.91 ms) | **boost::list** (9.80 ms) |
| **insert_middle** | **RG::K::LIST** (1.33 ms) | **eastl::list** (4.42 ms) | **std::forward_list** (4.81 ms) |
| **erase_middle** | **RG::K::LIST** (1.22 ms) | **std::forward_list** (6.48 ms) | **eastl::list** (6.75 ms) |
| **iterate** | **RG::K::LIST** (0.67 ms) | **eastl::list** (0.78 ms) | **boost::list** (0.79 ms) |
| **clear** | **RG::K::LIST** (2.24 ms) | **eastl::list** (14.26 ms) | **boost::list** (15.07 ms) |
=======
| **push_back** | **RG::K::LIST** (3.20 ms) | **boost::list** (8.29 ms) | **std::forward_list** (8.30 ms) |
| **push_front** | **RG::K::LIST** (3.19 ms) | **std::list** (9.96 ms) | **boost::list** (10.99 ms) |
| **insert_middle** | **RG::K::LIST** (1.78 ms) | **std::forward_list** (4.15 ms) | **boost::list** (4.55 ms) |
| **erase_middle** | **RG::K::LIST** (1.69 ms) | **boost::list** (4.31 ms) | **eastl::list** (4.59 ms) |
| **iterate** | **boost::list** (0.81 ms) | **RG::K::LIST** (0.90 ms) | **eastl::list** (0.91 ms) |
| **clear** | **RG::K::LIST** (3.19 ms) | **std::forward_list** (8.50 ms) | **boost::list** (8.62 ms) |
>>>>>>> 7730f926e2e6f41a6f5cff778ec94f90782ac7b0

