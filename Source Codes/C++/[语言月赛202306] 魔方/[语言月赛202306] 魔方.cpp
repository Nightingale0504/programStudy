#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int n;
int a=8,b,c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	b=12*(n-2);
	c=6*pow((n-2),2);
	printf("%lld %lld %lld",a,b,c);
	return 0;
}

