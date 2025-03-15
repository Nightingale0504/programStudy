#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define int long long
int n,m;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=n;i<=m;i++){
		if (i>=1000 && i<=9999){
			int a=i%10;
			int b=i/10%10;
			int c=i/100%10;
			int d=i/1000;
			if (pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4)==i){
				printf("%lld ",i);
			}
		}
	}
	return 0;
}
