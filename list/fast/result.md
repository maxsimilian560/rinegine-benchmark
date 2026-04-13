| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.77 ms | 8.14 ms | 7.42 ms | 7.70 ms | 7.81 ms |
| **push_front** | 1.75 ms | 8.41 ms | 8.39 ms | 10.06 ms | 9.42 ms |
| **insert_middle** | 0.94 ms | 4.49 ms | 4.16 ms | 4.34 ms | 4.41 ms |
| **erase_middle** | 0.99 ms | 4.49 ms | 5.11 ms | 5.61 ms | 5.65 ms |
| **iterate** | 0.90 ms | 1.30 ms | 1.82 ms | 1.49 ms | 1.28 ms |
| **clear** | 1.72 ms | 8.10 ms | 7.41 ms | 7.81 ms | 7.85 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.77 ms) | **std::forward_list** (7.42 ms) | **boost::list** (7.70 ms) |
| **push_front** | **RG::LIST** (1.75 ms) | **std::forward_list** (8.39 ms) | **std::list** (8.41 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **std::forward_list** (4.16 ms) | **boost::list** (4.34 ms) |
| **erase_middle** | **RG::LIST** (0.99 ms) | **std::list** (4.49 ms) | **std::forward_list** (5.11 ms) |
| **iterate** | **RG::LIST** (0.90 ms) | **eastl::list** (1.28 ms) | **std::list** (1.30 ms) |
| **clear** | **RG::LIST** (1.72 ms) | **std::forward_list** (7.41 ms) | **boost::list** (7.81 ms) |

