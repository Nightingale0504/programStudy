#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&a,&b);
	a<=b ? printf("YE5") : printf("N0");
	return 0;
}

