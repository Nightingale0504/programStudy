#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%8lld %8lld %8lld",a,b,c);
	return 0;
}

