#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double a,b,c;
signed main(){
	scanf("%lf%lf",&a,&b);
	c=100*b/a;
	printf("%.3f%%",c);
	return 0;
}

