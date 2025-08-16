#ifndef __ROTARYMARS__IOUTILITY__
#define __ROTARYMARS__IOUTILITY__
#include <iostream>
#include <set>
#include <vector>
template<class T, class U>
std::istream& operator>>(std::istream& is, std::pair<T, U>& p) {
  is >> p.first >> p.second;
  return is;
}
template<class T, class U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p) {
  os << p.first << " " << p.second;
  return os;
}

template<class T>
std::istream& operator>>(std::istream& is, std::vector<T>& v) {
  for (T& x : v) is >> x;
  return is;
}
template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it) {
    os << *it;
    if (it != v.end() - 1) {
      os << " ";
    }
  }
  return os;
}
inline std::istream& operator>>(std::istream& in, __int128& val) {
  std::string str;
  in >> str;
  val = 0;
  for (char c : str) {
      val = val * 10 + (c - '0');
  }
  return in;
}

inline std::ostream& operator<<(std::ostream& out, __int128 val) {
  if (val == 0) {
      out << '0';
  } else {
      if (val < 0) {
          out << '-';
          val = -val;
      }
      std::string str;
      while (val > 0) {
          str += '0' + (val % 10);
          val /= 10;
      }
      for (auto it = str.rbegin(); it != str.rend(); ++it) {
          out << *it;
      }
  }
  return out;
}

template<class T>
std::istream& operator>>(std::istream& is, std::set<T>& s) {
  T x;
  is >> x;
  s.insert(x);
  return is;
}
template<class T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& s) {
  for (class std::set<T>::const_iterator it = s.begin(); it != s.end(); ++it) {
    os << *it;
    if (it != s.end() - 1) {
      os << " ";
    }
  }
  return os;
}
template<class T>
std::istream& operator>>(std::istream& is, std::multiset<T>& s) {
  T x;
  is >> x;
  s.insert(x);
  return is;
}
template<class T>
std::ostream& operator<<(std::ostream& os, const std::multiset<T>& s) {
  for (class std::multiset<T>::const_iterator it = s.begin(); it != s.end(); ++it) {
    os << *it;
    if (it != s.end() - 1) {
      os << " ";
    }
  }
  return os;
}
#endif