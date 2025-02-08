#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
long long k,n,d,e,m,mid;
int main(){
	scanf("%lld",&k);
	while (k--){
		scanf("%lld%lld%lld",&n,&d,&e);
		bool flag=false;
		m=n-e*d+2;
		long long l=1,r=sqrt(n);
		while (l<=r){
			long long p=(l+r)/2;
			long long q=m-p;
			if (p*q==n){
				printf("%lld %lld\n",p,q);
				flag=true;
				break;
			}else if (p*q>n){
				r=p-1; 
			}else if (p*q<n){
				l=p+1;
			}
		}
		if (!flag){
			printf("%s\n","NO");
		}
	}
	return 0;
}

