| Operation | RG::LIST | std::list | std::forward_list | boost::list | eastl::list |
|---|---|---|---|---|---|
| **push_back** | 1.82 ms | 11.40 ms | 10.47 ms | 10.60 ms | 9.64 ms |
| **push_front** | 1.80 ms | 11.60 ms | 10.34 ms | 10.85 ms | 9.87 ms |
| **insert_middle** | 0.61 ms | 5.83 ms | 5.33 ms | 5.43 ms | 5.04 ms |
| **erase_middle** | 0.66 ms | 5.81 ms | 5.39 ms | 5.60 ms | 5.16 ms |
| **iterate** | 0.80 ms | 0.78 ms | 0.79 ms | 0.80 ms | 0.79 ms |
| **clear** | 1.68 ms | 11.36 ms | 10.39 ms | 10.59 ms | 9.66 ms |

### 🏆 Лидеры по операциям

| Operation | 🥇 1-е место | 🥈 2-е место | 🥉 3-е место |
|---|---|---|---|
| **push_back** | **RG::LIST** (1.82 ms) | **eastl::list** (9.64 ms) | **std::forward_list** (10.47 ms) |
| **push_front** | **RG::LIST** (1.80 ms) | **eastl::list** (9.87 ms) | **std::forward_list** (10.34 ms) |
| **insert_middle** | **RG::LIST** (0.61 ms) | **eastl::list** (5.04 ms) | **std::forward_list** (5.33 ms) |
| **erase_middle** | **RG::LIST** (0.66 ms) | **eastl::list** (5.16 ms) | **std::forward_list** (5.39 ms) |
| **iterate** | **std::list** (0.78 ms) | **std::forward_list** (0.79 ms) | **eastl::list** (0.79 ms) |
| **clear** | **RG::LIST** (1.68 ms) | **eastl::list** (9.66 ms) | **std::forward_list** (10.39 ms) |

