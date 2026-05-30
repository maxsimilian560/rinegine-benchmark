| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 14.42 ms | 19.39 ms | 18.20 ms | 17.82 ms | 17.75 ms |
| **push_front** | 40.31 ms | 11.84 ms | 10.86 ms | 11.29 ms | 10.21 ms |
| **insert_middle** | 33.34 ms | 5.96 ms | 5.53 ms | 5.62 ms | 5.13 ms |
| **erase_middle** | 62.33 ms | 7.95 ms | 7.37 ms | 8.55 ms | 6.66 ms |
| **iterate** | 1.37 ms | 0.90 ms | 0.88 ms | 0.87 ms | 0.86 ms |
| **clear** | 69.91 ms | 18.00 ms | 16.10 ms | 16.03 ms | 15.29 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (14.42 ms) | **eastl::list** (17.75 ms) | **boost::list** (17.82 ms) |
| **push_front** | **eastl::list** (10.21 ms) | **std::forward_list** (10.86 ms) | **boost::list** (11.29 ms) |
| **insert_middle** | **eastl::list** (5.13 ms) | **std::forward_list** (5.53 ms) | **boost::list** (5.62 ms) |
| **erase_middle** | **eastl::list** (6.66 ms) | **std::forward_list** (7.37 ms) | **std::list** (7.95 ms) |
| **iterate** | **eastl::list** (0.86 ms) | **boost::list** (0.87 ms) | **std::forward_list** (0.88 ms) |
| **clear** | **eastl::list** (15.29 ms) | **boost::list** (16.03 ms) | **std::forward_list** (16.10 ms) |

