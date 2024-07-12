#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int n,k,m,mmax=LONG_LONG_MIN;
int sum[1000005];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=2;i<=n;i++){
		scanf("%lld",&m);
		sum[i]=sum[i-1]+m;
	}
	for (int i=1;i+k<=n;i++){
		mmax=max(mmax,sum[i+k]-sum[i]);
	}
	printf("%lld",sum[n]-mmax);
	return 0;
}

