#ifndef __ROTARYMARS__ERASE_UNIQUE__
#define __ROTARYMARS__ERASE_UNIQUE__

#include <algorithm>
#include <vector>
template<class T>
void UNIQUE_ERASE(std::vector<T>&v) {
  std::sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end());
}
#endif
