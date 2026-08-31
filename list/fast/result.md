| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.68 ms | 18.12 ms | 17.21 ms | 1.89 ms | 17.33 ms |
| **push_front** | 2.71 ms | 11.09 ms | 9.86 ms | 3.29 ms | 13.88 ms |
| **insert_middle** | 1.83 ms | 7.32 ms | 6.82 ms | 1.01 ms | 5.43 ms |
| **erase_middle** | 1.60 ms | 8.91 ms | 8.06 ms | 0.91 ms | 6.67 ms |
| **iterate** | 0.70 ms | 0.81 ms | 0.87 ms | 0.70 ms | 0.83 ms |
| **clear** | 2.83 ms | 17.17 ms | 17.61 ms | 1.89 ms | 15.28 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (1.89 ms) | **RG::K::LIST** (2.68 ms) | **std::forward_list** (17.21 ms) |
| **push_front** | **RG::K::LIST** (2.71 ms) | **boost::list** (3.29 ms) | **std::forward_list** (9.86 ms) |
| **insert_middle** | **boost::list** (1.01 ms) | **RG::K::LIST** (1.83 ms) | **eastl::list** (5.43 ms) |
| **erase_middle** | **boost::list** (0.91 ms) | **RG::K::LIST** (1.60 ms) | **eastl::list** (6.67 ms) |
| **iterate** | **RG::K::LIST** (0.70 ms) | **boost::list** (0.70 ms) | **std::list** (0.81 ms) |
| **clear** | **boost::list** (1.89 ms) | **RG::K::LIST** (2.83 ms) | **eastl::list** (15.28 ms) |

