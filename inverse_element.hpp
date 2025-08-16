#ifndef __ROTARYMARS__INVERSE_ELEMENT__
#define __ROTARYMARS__INVERSE_ELEMENT__ 1
#include <cstdlib>
template<class T>
T inverse_element(T x, T mod){
    return POWMOD(x,mod-2,mod);
}
#else
#endif
