#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&x);
	printf("I am %lld years old.",x);
	return 0;
}

