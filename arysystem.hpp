#ifndef __ROTARYMARS__ARYSYSTEM__
#define __ROTARYMARS__ARYSYSTEM__
#include <vector>
#include <algorithm>
template<class T>
T KTOTEN(int a,int k){
	int ret=0;
	int now=1;
	while(a>0){
		ret+=(a%10)*now;
		a/=10;
		now*=k;
	}
	return ret;
}


std::vector<int> TENTOK(long long n, long long k){
    std::vector<int>ret;
    if(n==0){
      return std::vector<int>(1,0);
    }
    while(n>0){
        ret.push_back(n%k);
        n/=k;
    }
    reverse(ret.begin(),ret.end());
    return ret;
}
#else
#endif