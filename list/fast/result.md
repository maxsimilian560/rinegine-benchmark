| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.49 ms | 19.13 ms | 16.91 ms | 18.24 ms | 16.55 ms |
| **push_front** | 2.64 ms | 20.55 ms | 21.28 ms | 18.08 ms | 16.96 ms |
| **insert_middle** | 1.00 ms | 10.03 ms | 8.64 ms | 8.70 ms | 8.00 ms |
| **erase_middle** | 0.97 ms | 9.35 ms | 8.69 ms | 8.68 ms | 8.19 ms |
| **iterate** | 0.99 ms | 0.98 ms | 0.90 ms | 0.97 ms | 0.89 ms |
| **clear** | 2.43 ms | 18.23 ms | 18.59 ms | 18.23 ms | 17.36 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.49 ms) | **eastl::list** (16.55 ms) | **std::forward_list** (16.91 ms) |
| **push_front** | **RG::LIST** (2.64 ms) | **eastl::list** (16.96 ms) | **boost::list** (18.08 ms) |
| **insert_middle** | **RG::LIST** (1.00 ms) | **eastl::list** (8.00 ms) | **std::forward_list** (8.64 ms) |
| **erase_middle** | **RG::LIST** (0.97 ms) | **eastl::list** (8.19 ms) | **boost::list** (8.68 ms) |
| **iterate** | **eastl::list** (0.89 ms) | **std::forward_list** (0.90 ms) | **boost::list** (0.97 ms) |
| **clear** | **RG::LIST** (2.43 ms) | **eastl::list** (17.36 ms) | **std::list** (18.23 ms) |

