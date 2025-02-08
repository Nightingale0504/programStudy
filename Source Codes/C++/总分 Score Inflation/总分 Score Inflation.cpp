#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define maxN 10005
int m,n,dp[maxN],t[maxN],score[maxN];
signed main(){
	scanf("%lld%lld",&m,&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&score[i],&t[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=t[i];j<=m;j++){
			dp[j]=max(dp[j],dp[j-t[i]]+score[i]);
		}
	}
	printf("%lld\n",dp[m]);
	return 0;
}

