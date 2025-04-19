#include<bits/stdc++.h> 
using namespace std;
#define int long long
double a,b,c,delta;
double x1,x2;
signed main(){
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if (delta<0){
		printf("No answer!");
	}else{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		if (x1==x2){
			printf("x1=x2=%.5lf",x1);
		}else{
			printf("x1=%.5lf;x2=%.5lf",min(x1,x2),max(x1,x2));
		}
	}
	return 0;
}

