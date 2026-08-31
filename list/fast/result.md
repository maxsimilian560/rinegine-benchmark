| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.41 ms | 9.04 ms | 7.71 ms | 1.85 ms | 8.12 ms |
| **push_front** | 3.39 ms | 9.25 ms | 9.07 ms | 1.65 ms | 12.84 ms |
| **insert_middle** | 1.86 ms | 5.54 ms | 4.79 ms | 1.09 ms | 4.88 ms |
| **erase_middle** | 1.80 ms | 4.98 ms | 5.41 ms | 1.07 ms | 6.25 ms |
| **iterate** | 0.79 ms | 3.01 ms | 3.70 ms | 0.72 ms | 2.76 ms |
| **clear** | 3.39 ms | 14.47 ms | 11.76 ms | 1.88 ms | 13.71 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **boost::list** (1.85 ms) | **RG::K::LIST** (3.41 ms) | **std::forward_list** (7.71 ms) |
| **push_front** | **boost::list** (1.65 ms) | **RG::K::LIST** (3.39 ms) | **std::forward_list** (9.07 ms) |
| **insert_middle** | **boost::list** (1.09 ms) | **RG::K::LIST** (1.86 ms) | **std::forward_list** (4.79 ms) |
| **erase_middle** | **boost::list** (1.07 ms) | **RG::K::LIST** (1.80 ms) | **std::list** (4.98 ms) |
| **iterate** | **boost::list** (0.72 ms) | **RG::K::LIST** (0.79 ms) | **eastl::list** (2.76 ms) |
| **clear** | **boost::list** (1.88 ms) | **RG::K::LIST** (3.39 ms) | **std::forward_list** (11.76 ms) |

