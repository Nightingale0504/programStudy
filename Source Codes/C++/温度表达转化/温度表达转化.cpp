#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double f,c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf",&f);
	c=5*(f-32)/9;
	printf("%.5f",c);
	return 0;
}

