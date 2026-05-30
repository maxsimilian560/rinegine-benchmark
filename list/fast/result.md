| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 5.23 ms | 9.21 ms | 8.03 ms | 8.44 ms | 8.84 ms |
| **push_front** | 5.19 ms | 9.93 ms | 10.78 ms | 10.86 ms | 17.90 ms |
| **insert_middle** | 4.52 ms | 6.38 ms | 5.19 ms | 6.43 ms | 5.60 ms |
| **erase_middle** | 31.13 ms | 7.48 ms | 5.76 ms | 6.38 ms | 6.22 ms |
| **iterate** | 1.59 ms | 11.97 ms | 11.56 ms | 9.64 ms | 9.36 ms |
| **clear** | 71.86 ms | 24.23 ms | 26.10 ms | 21.75 ms | 28.59 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (5.23 ms) | **std::forward_list** (8.03 ms) | **boost::list** (8.44 ms) |
| **push_front** | **RG::LIST** (5.19 ms) | **std::list** (9.93 ms) | **std::forward_list** (10.78 ms) |
| **insert_middle** | **RG::LIST** (4.52 ms) | **std::forward_list** (5.19 ms) | **eastl::list** (5.60 ms) |
| **erase_middle** | **std::forward_list** (5.76 ms) | **eastl::list** (6.22 ms) | **boost::list** (6.38 ms) |
| **iterate** | **RG::LIST** (1.59 ms) | **eastl::list** (9.36 ms) | **boost::list** (9.64 ms) |
| **clear** | **boost::list** (21.75 ms) | **std::list** (24.23 ms) | **std::forward_list** (26.10 ms) |

