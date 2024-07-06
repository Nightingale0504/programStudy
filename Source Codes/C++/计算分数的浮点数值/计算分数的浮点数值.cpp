#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double a,b,c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf%lf",&a,&b);
	c=a/b;
	printf("%.9f",c);
	return 0;
}

