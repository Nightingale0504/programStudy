#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double R,r1,r2;
signed main(){
	scanf("%lf%lf",&r1,&r2);
	R=1/((1/r1)+(1/r2));
	printf("%.2f",R);
	return 0;
}

