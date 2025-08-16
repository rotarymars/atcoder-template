#ifndef __ROTARYMARS__POWMOD__
#define __ROTARYMARS__POWMOD__
template <class T>
T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0)
  {
    if (b & 1)
    {
      ans *= a;
    }
    a *= a;
    b >>= 1;
    a %= c;
    ans %= c;
  }
  return ans;
}
#else
#endif
