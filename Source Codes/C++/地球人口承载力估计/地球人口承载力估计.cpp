#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double x,y,z,a,b; 
signed main(){
	scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
	z=(x*a-y*b)/(a-b);
	printf("%.2f",z);
	return 0;
}

