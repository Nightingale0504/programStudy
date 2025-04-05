#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,k,sum[maxN],t,mmax; 
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%lld",&t);
		sum[i]=sum[i-1]+t;
	}
	for (int i=1;i+k<=n;i++){
		mmax=max(mmax,sum[i+k]-sum[i-1]);
	}
	printf("%lld",mmax);
	return 0;
}

