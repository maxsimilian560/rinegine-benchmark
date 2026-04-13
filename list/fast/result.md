| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 2.42 ms | 9.35 ms | 7.95 ms | 8.12 ms | 8.55 ms |
| **push_front** | 2.50 ms | 10.89 ms | 11.22 ms | 16.15 ms | 10.35 ms |
| **insert_middle** | 0.92 ms | 4.97 ms | 4.19 ms | 4.30 ms | 4.41 ms |
| **erase_middle** | 0.99 ms | 4.88 ms | 4.61 ms | 5.15 ms | 5.48 ms |
| **iterate** | 0.72 ms | 0.98 ms | 0.74 ms | 1.37 ms | 1.05 ms |
| **clear** | 2.43 ms | 9.25 ms | 8.31 ms | 8.32 ms | 8.73 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (2.42 ms) | **std::forward_list** (7.95 ms) | **boost::list** (8.12 ms) |
| **push_front** | **RG::LIST** (2.50 ms) | **eastl::list** (10.35 ms) | **std::list** (10.89 ms) |
| **insert_middle** | **RG::LIST** (0.92 ms) | **std::forward_list** (4.19 ms) | **boost::list** (4.30 ms) |
| **erase_middle** | **RG::LIST** (0.99 ms) | **std::forward_list** (4.61 ms) | **std::list** (4.88 ms) |
| **iterate** | **RG::LIST** (0.72 ms) | **std::forward_list** (0.74 ms) | **std::list** (0.98 ms) |
| **clear** | **RG::LIST** (2.43 ms) | **std::forward_list** (8.31 ms) | **boost::list** (8.32 ms) |

