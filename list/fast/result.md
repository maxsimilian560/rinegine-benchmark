| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 5.19 ms | 9.20 ms | 8.00 ms | 8.32 ms | 8.55 ms |
| **push_front** | 5.19 ms | 9.41 ms | 8.42 ms | 9.25 ms | 9.85 ms |
| **insert_middle** | 5.18 ms | 6.00 ms | 4.74 ms | 4.76 ms | 4.95 ms |
| **erase_middle** | 33.79 ms | 5.41 ms | 5.04 ms | 5.48 ms | 5.67 ms |
| **iterate** | 1.39 ms | 3.01 ms | 2.74 ms | 2.73 ms | 3.47 ms |
| **clear** | 62.52 ms | 12.72 ms | 10.81 ms | 10.74 ms | 10.90 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (5.19 ms) | **std::forward_list** (8.00 ms) | **boost::list** (8.32 ms) |
| **push_front** | **RG::LIST** (5.19 ms) | **std::forward_list** (8.42 ms) | **boost::list** (9.25 ms) |
| **insert_middle** | **std::forward_list** (4.74 ms) | **boost::list** (4.76 ms) | **eastl::list** (4.95 ms) |
| **erase_middle** | **std::forward_list** (5.04 ms) | **std::list** (5.41 ms) | **boost::list** (5.48 ms) |
| **iterate** | **RG::LIST** (1.39 ms) | **boost::list** (2.73 ms) | **std::forward_list** (2.74 ms) |
| **clear** | **boost::list** (10.74 ms) | **std::forward_list** (10.81 ms) | **eastl::list** (10.90 ms) |

