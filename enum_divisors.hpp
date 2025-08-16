#ifndef __ROTARYMARS__ENUM_DIVISORS__
#define __ROTARYMARS__ENUM_DIVISORS__
#include <vector>
#include <algorithm>
using namespace std;
template<class T>
vector<T> ENUM_DIVISORS(T n) {
  vector<T> result;
  for (T i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      result.push_back(i);
      if (n / i != i)
      {
        result.push_back(n / i);
      }
    }
  }
  sort(result.begin(),result.end());
  return result;
}
#else
#endif
