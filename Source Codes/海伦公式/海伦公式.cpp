#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define int long long
double p,S,a,b,c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf",S);
	return 0;
}

