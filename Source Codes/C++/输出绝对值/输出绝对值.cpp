#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double n;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf",&n);
	printf("%.2lf",abs(n));
	return 0;
}

