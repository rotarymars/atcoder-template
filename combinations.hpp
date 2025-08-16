#ifndef __ROTARYMARS__COMBINATIONS__
#define __ROTARYMARS__COMBINATIONS__
template<class T>
T COMBINATIONS(T a, T b){
  T ret=1;
  for(T i=1;i<=b;++i){
    ret*=a-i;
    ret/=i;
  }
  return ret;
}
#endif