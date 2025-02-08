#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
const double pi=3.1415926535;
int n;
double s,r;
inline double cs(double r){
	double s;
	ans=pi*r*r;
	return s;
}
inline double dis(int a,int b,int c,int d){
	return sqrt((c-a)*(c-a)+(d-b)*(d-b));
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		int x,y;
		scanf("%lld%lld",&x,&y);
		r=max(r,dis())
	}
	s=cs(r);
	printf("%.4lf",s);
	return 0;
}

