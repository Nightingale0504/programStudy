#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
inline bool f(int x){
	if (x<2){
		return false;
	}
	for (int i=2;i*i<=x;i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
int n;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	printf(f(n) ? "isPrime" : "notPrime");
	return 0;
}

