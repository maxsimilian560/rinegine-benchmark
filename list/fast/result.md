| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.84 ms | 8.17 ms | 7.33 ms | 7.59 ms | 7.70 ms |
| **push_front** | 1.75 ms | 8.32 ms | 8.20 ms | 8.42 ms | 8.23 ms |
| **insert_middle** | 0.95 ms | 4.48 ms | 4.16 ms | 4.29 ms | 4.38 ms |
| **erase_middle** | 0.96 ms | 4.48 ms | 5.06 ms | 5.52 ms | 5.61 ms |
| **iterate** | 0.96 ms | 1.19 ms | 1.38 ms | 1.12 ms | 1.10 ms |
| **clear** | 1.76 ms | 8.08 ms | 7.53 ms | 7.49 ms | 7.84 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.84 ms) | **std::forward_list** (7.33 ms) | **boost::list** (7.59 ms) |
| **push_front** | **RG::LIST** (1.75 ms) | **std::forward_list** (8.20 ms) | **eastl::list** (8.23 ms) |
| **insert_middle** | **RG::LIST** (0.95 ms) | **std::forward_list** (4.16 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::LIST** (0.96 ms) | **std::list** (4.48 ms) | **std::forward_list** (5.06 ms) |
| **iterate** | **RG::LIST** (0.96 ms) | **eastl::list** (1.10 ms) | **boost::list** (1.12 ms) |
| **clear** | **RG::LIST** (1.76 ms) | **boost::list** (7.49 ms) | **std::forward_list** (7.53 ms) |

