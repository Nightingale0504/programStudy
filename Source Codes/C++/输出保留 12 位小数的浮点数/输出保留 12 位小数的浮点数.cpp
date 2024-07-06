#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double x;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf",&x);
	printf("%.12lf",x);
	return 0;
}

