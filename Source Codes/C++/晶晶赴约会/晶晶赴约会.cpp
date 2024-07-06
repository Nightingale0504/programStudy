#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n; 
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	printf((n==1 || n==3 ||n==5) ? "NO" : "YES");
	return 0;
}

