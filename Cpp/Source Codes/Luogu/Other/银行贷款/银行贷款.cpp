#include<bits/stdc++.h> 
using namespace std;
#define int long long
double m,y;
int t;
int out(double k){
	printf("%.1f",k*100);
	exit(0);
}
void solve(double l,double r){
	double k=(l+r)/2,u=r-l;
	double a=m;
	if (u<0.00001){
		out(k);
	}
	for (int i=1;i<=t;i++){
		a=a*(1+k)-y;
	}
	if (a>0){
		solve(l,k);
	}
	if (a<0){
		solve(k,r);
	}
	if (a==0){
		out(k);
	}
}
signed main(){

	scanf("%lf%lf%lld",&m,&y,&t);
	solve(0,5);
	return 0;
}

