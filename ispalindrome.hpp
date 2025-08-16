#ifndef __ROTARYMARS__ISPALINDROME__
#define __ROTARYMARS__ISPALINDROME__
#include <string>
bool ISPALINDROME(std::string s) {
  for (int i = 0; i < s.size() / 2; i++)
  {
    if (s[i] == s[s.size() - 1 - i])
    {
      continue;
    }
    return false;
  }
  return true;
}
#else
#endif
