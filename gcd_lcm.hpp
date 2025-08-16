#ifndef __ROTARYMARS__GCD_LCM__
#define __ROTARYMARS__GCD_LCM__ 1
#include <algorithm>
template<class T>
T GCD(T a, T b) {
  while (a && b)
  {
    if (a >= b)
    {
      a %= b;
    }
    else
    {
      b %= a;
    }
  }
  return std::max(a, b);
}
template<class T>
T LCM(T a, T b) {
  return a / GCD(a, b) * b;
}
#else
#endif
