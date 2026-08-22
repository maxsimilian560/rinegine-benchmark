| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.46 ms | 18.19 ms | 16.74 ms | 17.24 ms | 16.26 ms |
| **push_front** | 2.40 ms | 10.01 ms | 9.09 ms | 9.24 ms | 8.39 ms |
| **insert_middle** | 1.28 ms | 5.45 ms | 4.91 ms | 4.97 ms | 4.63 ms |
| **erase_middle** | 1.25 ms | 7.06 ms | 7.24 ms | 6.59 ms | 6.39 ms |
| **iterate** | 0.72 ms | 0.99 ms | 1.06 ms | 0.98 ms | 0.95 ms |
| **clear** | 2.87 ms | 16.64 ms | 15.53 ms | 15.81 ms | 14.94 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (2.46 ms) | **eastl::list** (16.26 ms) | **std::forward_list** (16.74 ms) |
| **push_front** | **RG::K::LIST** (2.40 ms) | **eastl::list** (8.39 ms) | **std::forward_list** (9.09 ms) |
| **insert_middle** | **RG::K::LIST** (1.28 ms) | **eastl::list** (4.63 ms) | **std::forward_list** (4.91 ms) |
| **erase_middle** | **RG::K::LIST** (1.25 ms) | **eastl::list** (6.39 ms) | **boost::list** (6.59 ms) |
| **iterate** | **RG::K::LIST** (0.72 ms) | **eastl::list** (0.95 ms) | **boost::list** (0.98 ms) |
| **clear** | **RG::K::LIST** (2.87 ms) | **eastl::list** (14.94 ms) | **std::forward_list** (15.53 ms) |

