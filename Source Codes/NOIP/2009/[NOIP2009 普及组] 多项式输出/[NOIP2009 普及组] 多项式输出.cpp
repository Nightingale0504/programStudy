#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int n,a; 
signed main(){
	scanf("%lld",&n);
	for (int i=n;i>=0;i--){
		scanf("%lld",&a);
		if (a){
			if (i!=n && a>0){
				printf("+");
			}
			if (abs(a)>1 || i==0){
				printf("%lld",a);
			}
			if (a==-1 && i){
				printf("-");
			}
			if (i>1){
				printf("x^%lld",i);
			}
			if (i==1){
				printf("x");
			}
		}
	}
	return 0;
}

