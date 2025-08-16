#ifndef __ROTARYMARS__PRIME_FACTORIZE__
#define __ROTARYMARS__PRIME_FACTORIZE__
#include <vector>
#include <utility>
#include <algorithm>
template <class T>
std::vector<std::pair<T, T>> PRIME_FACTORIZE(T n) {
  std::vector<std::pair<T, T>> result;
  for (T i = 2; i * i <= n; i++)
  {
    if (n % i != 0)
    {
      continue;
    }
    T ex = 0;
    while (n % i == 0)
    {
      ++ex;
      n /= i;
    }
    result.push_back({ i, ex });
  }
  if (n != 1)
  {
    result.push_back({ n, 1 });
  }
  sort(result.begin(),result.end());
  return result;
}
#else
#endif
