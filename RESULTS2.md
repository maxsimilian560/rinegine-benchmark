| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.76 ms | 12.28 ms | 11.68 ms | 11.65 ms | 10.50 ms |
| **push_front** | 2.01 ms | 12.59 ms | 10.94 ms | 10.99 ms | 10.22 ms |
| **insert_middle** | 0.65 ms | 6.16 ms | 5.77 ms | 5.72 ms | 5.19 ms |
| **erase_middle** | 0.64 ms | 6.10 ms | 5.65 ms | 5.64 ms | 5.31 ms |
| **iterate** | 0.78 ms | 0.80 ms | 0.78 ms | 0.79 ms | 0.80 ms |
| **clear** | 1.84 ms | 12.16 ms | 11.49 ms | 11.07 ms | 10.43 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.76 ms) | **eastl::list** (10.50 ms) | **boost::list** (11.65 ms) |
| **push_front** | **RG::LIST** (2.01 ms) | **eastl::list** (10.22 ms) | **std::forward_list** (10.94 ms) |
| **insert_middle** | **RG::LIST** (0.65 ms) | **eastl::list** (5.19 ms) | **boost::list** (5.72 ms) |
| **erase_middle** | **RG::LIST** (0.64 ms) | **eastl::list** (5.31 ms) | **boost::list** (5.64 ms) |
| **iterate** | **std::forward_list** (0.78 ms) | **RG::LIST** (0.78 ms) | **boost::list** (0.79 ms) |
| **clear** | **RG::LIST** (1.84 ms) | **eastl::list** (10.43 ms) | **boost::list** (11.07 ms) |

