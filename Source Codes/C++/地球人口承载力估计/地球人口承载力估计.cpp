#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double x,y,z,a,b; 
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
	z=(x*a-y*b)/(a-b);
	printf("%.2f",z);
	return 0;
}

