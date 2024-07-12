#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int n,a[10],b[10],s,sum;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&a[i],&b[i]);
		sum+=100/a[i]*b[i];
	}
	scanf("%lld",&s);
	if (sum>=s){
		printf("Already Au.");
	}else{
		sum=s-sum;
		for (int i=0;i<n;i++){
			if (100/a[i]*(a[i]-b[i])<sum){
				printf("NaN\n");
			}else{
				printf("%lld\n",(int)ceil(sum*1.0/(100/a[i])));
			}
		}
	}
	return 0;
}

