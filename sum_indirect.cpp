#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

void 
setup(int64_t N, uint64_t A[]) {
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution<uint64_t> dis(0, N-1);
   for (int64_t i = 0; i < N; i++) {
      A[i] = dis(gen);
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   int64_t total = 0;
   for (int64_t i = 0; i < N; i++) {
         total += A[A[i]];
   }
   return total;

   // return 0;
}

