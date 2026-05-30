| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 5.12 ms | 9.85 ms | 8.49 ms | 8.67 ms | 9.20 ms |
| **push_front** | 5.06 ms | 10.54 ms | 9.54 ms | 11.18 ms | 11.15 ms |
| **insert_middle** | 6.25 ms | 7.46 ms | 6.27 ms | 6.46 ms | 6.42 ms |
| **erase_middle** | 28.42 ms | 6.94 ms | 6.42 ms | 6.51 ms | 6.80 ms |
| **iterate** | 0.77 ms | 2.59 ms | 2.55 ms | 2.61 ms | 2.43 ms |
| **clear** | 83.95 ms | 14.35 ms | 11.72 ms | 11.41 ms | 12.27 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (5.12 ms) | **std::forward_list** (8.49 ms) | **boost::list** (8.67 ms) |
| **push_front** | **RG::LIST** (5.06 ms) | **std::forward_list** (9.54 ms) | **std::list** (10.54 ms) |
| **insert_middle** | **RG::LIST** (6.25 ms) | **std::forward_list** (6.27 ms) | **eastl::list** (6.42 ms) |
| **erase_middle** | **std::forward_list** (6.42 ms) | **boost::list** (6.51 ms) | **eastl::list** (6.80 ms) |
| **iterate** | **RG::LIST** (0.77 ms) | **eastl::list** (2.43 ms) | **std::forward_list** (2.55 ms) |
| **clear** | **boost::list** (11.41 ms) | **std::forward_list** (11.72 ms) | **eastl::list** (12.27 ms) |

