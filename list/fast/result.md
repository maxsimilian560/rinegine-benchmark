| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.22 ms | 9.39 ms | 8.01 ms | 8.35 ms | 8.60 ms |
| **push_front** | 2.30 ms | 9.78 ms | 9.96 ms | 10.34 ms | 10.81 ms |
| **insert_middle** | 0.99 ms | 5.09 ms | 4.21 ms | 4.29 ms | 4.43 ms |
| **erase_middle** | 1.00 ms | 5.11 ms | 4.59 ms | 5.10 ms | 5.36 ms |
| **iterate** | 0.67 ms | 1.16 ms | 1.21 ms | 1.64 ms | 0.99 ms |
| **clear** | 2.56 ms | 9.27 ms | 8.28 ms | 8.42 ms | 9.27 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.22 ms) | **std::forward_list** (8.01 ms) | **boost::list** (8.35 ms) |
| **push_front** | **RG::LIST** (2.30 ms) | **std::list** (9.78 ms) | **std::forward_list** (9.96 ms) |
| **insert_middle** | **RG::LIST** (0.99 ms) | **std::forward_list** (4.21 ms) | **boost::list** (4.29 ms) |
| **erase_middle** | **RG::LIST** (1.00 ms) | **std::forward_list** (4.59 ms) | **boost::list** (5.10 ms) |
| **iterate** | **RG::LIST** (0.67 ms) | **eastl::list** (0.99 ms) | **std::list** (1.16 ms) |
| **clear** | **RG::LIST** (2.56 ms) | **std::forward_list** (8.28 ms) | **boost::list** (8.42 ms) |

