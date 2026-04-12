#include <cstddef>
#include <new>
#define RinegineLib
#include <Rinegine/Kernel>
#include <Rinegine/WIP>
#include <benchmark/benchmark.h>
#include <list>
#include <forward_list>
#include <boost/container/list.hpp>
#undef EASTL_DEBUG
#include <EASTL/list.h>

namespace RG = Rinegine::Kernel;

static constexpr int BENCH_N = 500000;

// ═══════════════════════════════════════════════════════════
//  Push Back
// ═══════════════════════════════════════════════════════════

static void BM_RG_PushBack(benchmark::State& state) {
  for (auto _ : state) {
    RG::LIST<int> list;
    for (int j = 0; j < BENCH_N; j++) list.push(j);
    benchmark::DoNotOptimize(list.count);
  }
}
BENCHMARK(BM_RG_PushBack)->Name("RG::LIST/push_back");

static void BM_StdList_PushBack(benchmark::State& state) {
  for (auto _ : state) {
    std::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_StdList_PushBack)->Name("std::list/push_back");

static void BM_StdFwdList_PushBack(benchmark::State& state) {
  for (auto _ : state) {
    std::forward_list<int> lst;
    auto tail = lst.before_begin();
    for (int j = 0; j < BENCH_N; j++) tail = lst.insert_after(tail, j);
    benchmark::DoNotOptimize(lst.empty());
  }
}
BENCHMARK(BM_StdFwdList_PushBack)->Name("std::forward_list/push_back");

static void BM_Boost_PushBack(benchmark::State& state) {
  for (auto _ : state) {
    boost::container::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_Boost_PushBack)->Name("boost::list/push_back");

static void BM_EASTL_PushBack(benchmark::State& state) {
  for (auto _ : state) {
    eastl::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_EASTL_PushBack)->Name("eastl::list/push_back");

// ═══════════════════════════════════════════════════════════
//  Push Front
// ═══════════════════════════════════════════════════════════

static void BM_RG_PushFront(benchmark::State& state) {
  for (auto _ : state) {
    RG::LIST<int> list;
    for (int j = 0; j < BENCH_N; j++) {
      auto* n = static_cast<RG::NODE<int>*>(RG::ALLOCATOR::allocate(sizeof(RG::NODE<int>)));
      ::new(std::addressof(n->data)) int(j);
      n->prev = nullptr;
      n->next = list.head;
      if (list.head) list.head->prev = n;
      else list.end = n;
      list.head = n;
      ++list.count;
    }
    benchmark::DoNotOptimize(list.count);
  }
}
BENCHMARK(BM_RG_PushFront)->Name("RG::LIST/push_front");

static void BM_StdList_PushFront(benchmark::State& state) {
  for (auto _ : state) {
    std::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_front(j);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_StdList_PushFront)->Name("std::list/push_front");

static void BM_StdFwdList_PushFront(benchmark::State& state) {
  for (auto _ : state) {
    std::forward_list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_front(j);
    benchmark::DoNotOptimize(lst.empty());
  }
}
BENCHMARK(BM_StdFwdList_PushFront)->Name("std::forward_list/push_front");

static void BM_Boost_PushFront(benchmark::State& state) {
  for (auto _ : state) {
    boost::container::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_front(j);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_Boost_PushFront)->Name("boost::list/push_front");

static void BM_EASTL_PushFront(benchmark::State& state) {
  for (auto _ : state) {
    eastl::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_front(j);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_EASTL_PushFront)->Name("eastl::list/push_front");

// ═══════════════════════════════════════════════════════════
//  Insert Middle  (250k list, insert 1000 at mid)
// ═══════════════════════════════════════════════════════════

static void BM_RG_InsertMiddle(benchmark::State& state) {
  for (auto _ : state) {
    RG::LIST<int> list;
    for (int j = 0; j < BENCH_N / 2; j++) list.push(j);
    auto* mid = list.head;
    for (int k = 0; k < BENCH_N / 4; k++) mid = mid->next;
    for (int j = 0; j < 1000; j++) {
      auto* nn = static_cast<RG::NODE<int>*>(RG::ALLOCATOR::allocate(sizeof(RG::NODE<int>)));
      ::new(std::addressof(nn->data)) int(999);
      nn->prev = mid->prev;
      nn->next = mid;
      if (mid->prev) mid->prev->next = nn;
      mid->prev = nn;
      list.count++;
    }
    benchmark::DoNotOptimize(list.count);
  }
}
BENCHMARK(BM_RG_InsertMiddle)->Name("RG::LIST/insert_middle");

static void BM_StdList_InsertMiddle(benchmark::State& state) {
  for (auto _ : state) {
    std::list<int> lst;
    for (int j = 0; j < BENCH_N / 2; j++) lst.push_back(j);
    auto it = lst.begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) lst.insert(it, 999);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_StdList_InsertMiddle)->Name("std::list/insert_middle");

static void BM_StdFwdList_InsertMiddle(benchmark::State& state) {
  for (auto _ : state) {
    std::forward_list<int> lst;
    auto m = lst.before_begin();
    for (int j = 0; j < BENCH_N / 2; j++) m = lst.insert_after(m, j);
    auto it = lst.before_begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) it = lst.insert_after(it, 999);
    benchmark::DoNotOptimize(lst.empty());
  }
}
BENCHMARK(BM_StdFwdList_InsertMiddle)->Name("std::forward_list/insert_middle");

static void BM_Boost_InsertMiddle(benchmark::State& state) {
  for (auto _ : state) {
    boost::container::list<int> lst;
    for (int j = 0; j < BENCH_N / 2; j++) lst.push_back(j);
    auto it = lst.begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) lst.insert(it, 999);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_Boost_InsertMiddle)->Name("boost::list/insert_middle");

static void BM_EASTL_InsertMiddle(benchmark::State& state) {
  for (auto _ : state) {
    eastl::list<int> lst;
    for (int j = 0; j < BENCH_N / 2; j++) lst.push_back(j);
    auto it = lst.begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) lst.insert(it, 999);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_EASTL_InsertMiddle)->Name("eastl::list/insert_middle");

// ═══════════════════════════════════════════════════════════
//  Erase Middle  (250k list, erase 1000 at mid)
// ═══════════════════════════════════════════════════════════

static void BM_RG_EraseMiddle(benchmark::State& state) {
  for (auto _ : state) {
    RG::LIST<int> list;
    for (int j = 0; j < BENCH_N / 2; j++) list.push(j);
    auto* mid = list.head;
    for (int k = 0; k < BENCH_N / 4; k++) mid = mid->next;
    auto* del = mid;
    for (int j = 0; j < 1000; j++) {
      auto* next = del->next;
      auto* prev = del->prev;
      if (prev) prev->next = next;
      if (next) next->prev = prev;
      RG::ALLOCATOR::deallocate(del);
      del = next;
      list.count--;
    }
    benchmark::DoNotOptimize(list.count);
  }
}
BENCHMARK(BM_RG_EraseMiddle)->Name("RG::LIST/erase_middle");

static void BM_StdList_EraseMiddle(benchmark::State& state) {
  for (auto _ : state) {
    std::list<int> lst;
    for (int j = 0; j < BENCH_N / 2; j++) lst.push_back(j);
    auto it = lst.begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) it = lst.erase(it);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_StdList_EraseMiddle)->Name("std::list/erase_middle");

static void BM_StdFwdList_EraseMiddle(benchmark::State& state) {
  for (auto _ : state) {
    std::forward_list<int> lst;
    auto m = lst.before_begin();
    for (int j = 0; j < BENCH_N / 2; j++) m = lst.insert_after(m, j);
    auto it = lst.before_begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) it = lst.erase_after(it);
    benchmark::DoNotOptimize(lst.empty());
  }
}
BENCHMARK(BM_StdFwdList_EraseMiddle)->Name("std::forward_list/erase_middle");

static void BM_Boost_EraseMiddle(benchmark::State& state) {
  for (auto _ : state) {
    boost::container::list<int> lst;
    for (int j = 0; j < BENCH_N / 2; j++) lst.push_back(j);
    auto it = lst.begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) it = lst.erase(it);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_Boost_EraseMiddle)->Name("boost::list/erase_middle");

static void BM_EASTL_EraseMiddle(benchmark::State& state) {
  for (auto _ : state) {
    eastl::list<int> lst;
    for (int j = 0; j < BENCH_N / 2; j++) lst.push_back(j);
    auto it = lst.begin();
    for (int k = 0; k < BENCH_N / 4; k++) ++it;
    for (int j = 0; j < 1000; j++) it = lst.erase(it);
    benchmark::DoNotOptimize(lst.size());
  }
}
BENCHMARK(BM_EASTL_EraseMiddle)->Name("eastl::list/erase_middle");

// ═══════════════════════════════════════════════════════════
//  Iterate  (pre-filled, measure traversal only)
// ═══════════════════════════════════════════════════════════

static void BM_RG_Iterate(benchmark::State& state) {
  RG::LIST<int> list;
  for (int j = 0; j < BENCH_N; j++) list.push(j);
  for (auto _ : state) {
    volatile long long sum = 0;
    for (auto* it = list.head; it; it = it->next) sum += it->data;
    benchmark::DoNotOptimize(sum);
  }
}
BENCHMARK(BM_RG_Iterate)->Name("RG::LIST/iterate");

static void BM_StdList_Iterate(benchmark::State& state) {
  std::list<int> lst;
  for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
  for (auto _ : state) {
    volatile long long sum = 0;
    for (auto& v : lst) sum += v;
    benchmark::DoNotOptimize(sum);
  }
}
BENCHMARK(BM_StdList_Iterate)->Name("std::list/iterate");

static void BM_StdFwdList_Iterate(benchmark::State& state) {
  std::forward_list<int> lst;
  auto tail = lst.before_begin();
  for (int j = 0; j < BENCH_N; j++) tail = lst.insert_after(tail, j);
  for (auto _ : state) {
    volatile long long sum = 0;
    for (auto& v : lst) sum += v;
    benchmark::DoNotOptimize(sum);
  }
}
BENCHMARK(BM_StdFwdList_Iterate)->Name("std::forward_list/iterate");

static void BM_Boost_Iterate(benchmark::State& state) {
  boost::container::list<int> lst;
  for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
  for (auto _ : state) {
    volatile long long sum = 0;
    for (auto& v : lst) sum += v;
    benchmark::DoNotOptimize(sum);
  }
}
BENCHMARK(BM_Boost_Iterate)->Name("boost::list/iterate");

static void BM_EASTL_Iterate(benchmark::State& state) {
  eastl::list<int> lst;
  for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
  for (auto _ : state) {
    volatile long long sum = 0;
    for (auto& v : lst) sum += v;
    benchmark::DoNotOptimize(sum);
  }
}
BENCHMARK(BM_EASTL_Iterate)->Name("eastl::list/iterate");

// ═══════════════════════════════════════════════════════════
//  Clear
// ═══════════════════════════════════════════════════════════

static void BM_RG_Clear(benchmark::State& state) {
  for (auto _ : state) {
    RG::LIST<int> list;
    for (int j = 0; j < BENCH_N; j++) list.push(j);
    list.clear();
  }
}
BENCHMARK(BM_RG_Clear)->Name("RG::LIST/clear");

static void BM_StdList_Clear(benchmark::State& state) {
  for (auto _ : state) {
    std::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
    lst.clear();
  }
}
BENCHMARK(BM_StdList_Clear)->Name("std::list/clear");

static void BM_StdFwdList_Clear(benchmark::State& state) {
  for (auto _ : state) {
    std::forward_list<int> lst;
    auto tail = lst.before_begin();
    for (int j = 0; j < BENCH_N; j++) tail = lst.insert_after(tail, j);
    lst.clear();
  }
}
BENCHMARK(BM_StdFwdList_Clear)->Name("std::forward_list/clear");

static void BM_Boost_Clear(benchmark::State& state) {
  for (auto _ : state) {
    boost::container::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
    lst.clear();
  }
}
BENCHMARK(BM_Boost_Clear)->Name("boost::list/clear");

static void BM_EASTL_Clear(benchmark::State& state) {
  for (auto _ : state) {
    eastl::list<int> lst;
    for (int j = 0; j < BENCH_N; j++) lst.push_back(j);
    lst.clear();
  }
}
BENCHMARK(BM_EASTL_Clear)->Name("eastl::list/clear");

int run_benchmarks(int argc = 0, char** argv = nullptr) {
  ::benchmark::Initialize(&argc, argv);
  ::benchmark::RunSpecifiedBenchmarks();
  return 0;
}
