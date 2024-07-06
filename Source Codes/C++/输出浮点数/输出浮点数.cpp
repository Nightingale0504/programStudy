#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double d;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf",&d);
	printf("%f\n%.5f\n%e\n%g",d,d,d,d);
	return 0;
}

