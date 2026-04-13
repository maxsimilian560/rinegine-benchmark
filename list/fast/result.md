| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.34 ms | 15.43 ms | 14.95 ms | 15.12 ms | 13.19 ms |
| **push_front** | 2.19 ms | 16.02 ms | 14.10 ms | 14.56 ms | 13.81 ms |
| **insert_middle** | 0.75 ms | 7.84 ms | 7.25 ms | 7.14 ms | 6.84 ms |
| **erase_middle** | 0.79 ms | 7.75 ms | 7.20 ms | 7.19 ms | 6.68 ms |
| **iterate** | 0.90 ms | 1.00 ms | 0.88 ms | 0.87 ms | 0.89 ms |
| **clear** | 2.10 ms | 15.96 ms | 14.46 ms | 14.99 ms | 13.53 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.34 ms) | **eastl::list** (13.19 ms) | **std::forward_list** (14.95 ms) |
| **push_front** | **RG::LIST** (2.19 ms) | **eastl::list** (13.81 ms) | **std::forward_list** (14.10 ms) |
| **insert_middle** | **RG::LIST** (0.75 ms) | **eastl::list** (6.84 ms) | **boost::list** (7.14 ms) |
| **erase_middle** | **RG::LIST** (0.79 ms) | **eastl::list** (6.68 ms) | **boost::list** (7.19 ms) |
| **iterate** | **boost::list** (0.87 ms) | **std::forward_list** (0.88 ms) | **eastl::list** (0.89 ms) |
| **clear** | **RG::LIST** (2.10 ms) | **eastl::list** (13.53 ms) | **std::forward_list** (14.46 ms) |

