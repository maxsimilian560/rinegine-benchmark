| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.23 ms | 9.53 ms | 8.04 ms | 8.15 ms | 8.73 ms |
| **push_front** | 2.35 ms | 9.62 ms | 9.15 ms | 9.41 ms | 10.12 ms |
| **insert_middle** | 0.97 ms | 4.99 ms | 4.21 ms | 4.32 ms | 4.41 ms |
| **erase_middle** | 1.02 ms | 4.91 ms | 4.61 ms | 5.17 ms | 5.45 ms |
| **iterate** | 0.67 ms | 0.95 ms | 1.01 ms | 1.14 ms | 0.83 ms |
| **clear** | 2.42 ms | 9.24 ms | 8.18 ms | 8.37 ms | 8.53 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.23 ms) | **std::forward_list** (8.04 ms) | **boost::list** (8.15 ms) |
| **push_front** | **RG::LIST** (2.35 ms) | **std::forward_list** (9.15 ms) | **boost::list** (9.41 ms) |
| **insert_middle** | **RG::LIST** (0.97 ms) | **std::forward_list** (4.21 ms) | **boost::list** (4.32 ms) |
| **erase_middle** | **RG::LIST** (1.02 ms) | **std::forward_list** (4.61 ms) | **std::list** (4.91 ms) |
| **iterate** | **RG::LIST** (0.67 ms) | **eastl::list** (0.83 ms) | **std::list** (0.95 ms) |
| **clear** | **RG::LIST** (2.42 ms) | **std::forward_list** (8.18 ms) | **boost::list** (8.37 ms) |

