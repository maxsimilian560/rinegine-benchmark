| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.20 ms | 9.33 ms | 8.78 ms | 7.95 ms | 9.03 ms |
| **push_front** | 3.20 ms | 11.03 ms | 12.82 ms | 12.74 ms | 18.17 ms |
| **insert_middle** | 1.80 ms | 8.42 ms | 7.61 ms | 7.24 ms | 8.51 ms |
| **erase_middle** | 1.68 ms | 11.39 ms | 10.56 ms | 11.24 ms | 13.31 ms |
| **iterate** | 0.90 ms | 7.50 ms | 9.14 ms | 8.50 ms | 6.66 ms |
| **clear** | 3.19 ms | 23.55 ms | 25.69 ms | 21.07 ms | 22.39 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (3.20 ms) | **boost::list** (7.95 ms) | **std::forward_list** (8.78 ms) |
| **push_front** | **RG::K::LIST** (3.20 ms) | **std::list** (11.03 ms) | **boost::list** (12.74 ms) |
| **insert_middle** | **RG::K::LIST** (1.80 ms) | **boost::list** (7.24 ms) | **std::forward_list** (7.61 ms) |
| **erase_middle** | **RG::K::LIST** (1.68 ms) | **std::forward_list** (10.56 ms) | **boost::list** (11.24 ms) |
| **iterate** | **RG::K::LIST** (0.90 ms) | **eastl::list** (6.66 ms) | **std::list** (7.50 ms) |
| **clear** | **RG::K::LIST** (3.19 ms) | **boost::list** (21.07 ms) | **eastl::list** (22.39 ms) |

