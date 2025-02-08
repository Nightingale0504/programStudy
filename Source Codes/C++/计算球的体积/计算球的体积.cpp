#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const double pi=3.14;
int r;
double v;
signed main(){
	scanf("%lld",&r);
	v=4.0/3*pi*r*r*r;
	printf("%.5lf",v);
	return 0;
}

