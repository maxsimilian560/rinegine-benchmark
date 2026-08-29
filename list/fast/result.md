| Operation | RG::K::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 3.58 ms | 25.58 ms | 26.60 ms | 70422.58 ms | 26.63 ms |
| **push_front** | 3.47 ms | 17.33 ms | 14.49 ms | 12.15 ms | 13.31 ms |
| **insert_middle** | 1.97 ms | 7.91 ms | 7.03 ms | 44470.90 ms | 7.51 ms |
| **erase_middle** | 2.04 ms | 10.61 ms | 10.02 ms | 43742.27 ms | 9.41 ms |
| **iterate** | 0.98 ms | 1.08 ms | 1.12 ms | 0.94 ms | 1.10 ms |
| **clear** | 3.47 ms | 23.04 ms | 22.22 ms | 186719.47 ms | 20.13 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::K::LIST** (3.58 ms) | **std::list** (25.58 ms) | **std::forward_list** (26.60 ms) |
| **push_front** | **RG::K::LIST** (3.47 ms) | **boost::list** (12.15 ms) | **eastl::list** (13.31 ms) |
| **insert_middle** | **RG::K::LIST** (1.97 ms) | **std::forward_list** (7.03 ms) | **eastl::list** (7.51 ms) |
| **erase_middle** | **RG::K::LIST** (2.04 ms) | **eastl::list** (9.41 ms) | **std::forward_list** (10.02 ms) |
| **iterate** | **boost::list** (0.94 ms) | **RG::K::LIST** (0.98 ms) | **std::list** (1.08 ms) |
| **clear** | **RG::K::LIST** (3.47 ms) | **eastl::list** (20.13 ms) | **std::forward_list** (22.22 ms) |

