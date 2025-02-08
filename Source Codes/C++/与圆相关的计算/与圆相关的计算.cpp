#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
const double pi=3.14159;
double r,d,c,s;
signed main(){
	scanf("%lf",&r);
	d=r*2;
	c=pi*d;
	s=pi*pow(r,2);
	printf("%.4f %.4f %.4f",d,c,s);
	return 0;
}

