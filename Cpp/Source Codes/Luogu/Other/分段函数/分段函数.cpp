#include<bits/stdc++.h> 
using namespace std;
#define int long long
double n,ans;
inline double f(double x){
	double y;
	if (x>=0 && x<5){
		y=-x+2.5;
	}else if (x>=5 && x<10){
		y=2-1.5*(x-3)*(x-3);
	}else{
		y=x/2-1.5;
	}
	return y;
}
signed main(){
	scanf("%lf",&n);
	ans=f(n);
	printf("%.3lf",ans);
	return 0;
}

