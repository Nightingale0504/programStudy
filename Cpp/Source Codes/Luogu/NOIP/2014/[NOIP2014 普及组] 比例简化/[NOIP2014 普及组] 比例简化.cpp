#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
double a,b,l,ans1,ans2,mmin=INT_MAX;
signed main(){
	scanf("%lf%lf%lf",&a,&b,&l);
	for (int i=1;i<=l;i++){
		for (int j=1;j<=l;j++){
			if (__gcd(i,j)==1 && i*b>=j*a && i*1.0/j-a/b<mmin){
				mmin=i*1.0/j-a/b;
				ans1=i;
				ans2=j;
			}
		}
	}
	printf("%.0lf %.0lf",ans1,ans2);
	return 0;
}

