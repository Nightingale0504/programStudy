#include<bits/stdc++.h> 
using namespace std;
double ans;
double sq(double x){
	return x*x;
}
double dist(double x1,double y1,double x2,double y2){
	int t1=sq(x1-x2);
	int t2=sq(y1-y2);
	return sqrt(t1+t2);
}
int main(){
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	ans+=dist(x1,y1,x2,y2);
	ans+=dist(x1,y1,x3,y3);
	ans+=dist(x2,y2,x3,y3);
	printf("%.2f",ans);
	return 0;
}

