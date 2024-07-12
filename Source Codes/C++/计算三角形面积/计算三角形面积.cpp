#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
double x[3],y[3],a,b,c,p,ans;
inline double f(double x,double y,double x1,double y1){
	return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
}
signed main(){
	for (int i=0;i<3;i++){
		scanf("%lf%lf",&x[i],&y[i]);
	}
	a=f(x[0],y[0],x[1],y[1]);
	b=f(x[1],y[1],x[2],y[2]);
	c=f(x[2],y[2],x[0],y[0]);
	p=(a+b+c)/2;
	ans=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf",ans);
	return 0;
}

