| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.79 ms | 8.16 ms | 7.67 ms | 7.90 ms | 7.78 ms |
| **push_front** | 1.74 ms | 8.52 ms | 8.30 ms | 10.20 ms | 9.45 ms |
| **insert_middle** | 0.94 ms | 4.47 ms | 4.34 ms | 4.33 ms | 4.37 ms |
| **erase_middle** | 0.99 ms | 4.53 ms | 5.11 ms | 5.55 ms | 5.60 ms |
| **iterate** | 0.90 ms | 1.18 ms | 1.36 ms | 1.12 ms | 1.10 ms |
| **clear** | 1.77 ms | 8.08 ms | 7.68 ms | 8.05 ms | 7.83 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.79 ms) | **std::forward_list** (7.67 ms) | **eastl::list** (7.78 ms) |
| **push_front** | **RG::LIST** (1.74 ms) | **std::forward_list** (8.30 ms) | **std::list** (8.52 ms) |
| **insert_middle** | **RG::LIST** (0.94 ms) | **boost::list** (4.33 ms) | **std::forward_list** (4.34 ms) |
| **erase_middle** | **RG::LIST** (0.99 ms) | **std::list** (4.53 ms) | **std::forward_list** (5.11 ms) |
| **iterate** | **RG::LIST** (0.90 ms) | **eastl::list** (1.10 ms) | **boost::list** (1.12 ms) |
| **clear** | **RG::LIST** (1.77 ms) | **std::forward_list** (7.68 ms) | **eastl::list** (7.83 ms) |

