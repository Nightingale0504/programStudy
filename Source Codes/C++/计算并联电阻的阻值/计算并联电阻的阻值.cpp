#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double R,r1,r2;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf%lf",&r1,&r2);
	R=1/((1/r1)+(1/r2));
	printf("%.2f",R);
	return 0;
}

