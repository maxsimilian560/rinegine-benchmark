| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.75 ms | 26.11 ms | 23.88 ms | 2.07 ms | 22.85 ms |
| **push_front** | 3.56 ms | 14.78 ms | 13.32 ms | 3.01 ms | 12.20 ms |
| **insert_middle** | 2.01 ms | 8.32 ms | 7.19 ms | 1.24 ms | 6.43 ms |
| **erase_middle** | 1.96 ms | 10.48 ms | 10.77 ms | 1.17 ms | 9.00 ms |
| **iterate** | 0.92 ms | 1.09 ms | 1.10 ms | 0.93 ms | 0.90 ms |
| **clear** | 3.66 ms | 23.84 ms | 22.44 ms | 2.13 ms | 20.69 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (2.07 ms) | **RG::K::LIST** (3.75 ms) | **eastl::list** (22.85 ms) |
| **push_front** | **boost::list** (3.01 ms) | **RG::K::LIST** (3.56 ms) | **eastl::list** (12.20 ms) |
| **insert_middle** | **boost::list** (1.24 ms) | **RG::K::LIST** (2.01 ms) | **eastl::list** (6.43 ms) |
| **erase_middle** | **boost::list** (1.17 ms) | **RG::K::LIST** (1.96 ms) | **eastl::list** (9.00 ms) |
| **iterate** | **eastl::list** (0.90 ms) | **RG::K::LIST** (0.92 ms) | **boost::list** (0.93 ms) |
| **clear** | **boost::list** (2.13 ms) | **RG::K::LIST** (3.66 ms) | **eastl::list** (20.69 ms) |

