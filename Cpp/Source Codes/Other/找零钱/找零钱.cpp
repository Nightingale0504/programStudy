#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define int long long
int n,m,ans;
int a[25],dp[105];
signed main(){
	memset(dp,0x3f,sizeof(dp));
	dp[0]=0;
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=m;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=m;i++){
		for (int j=a[i];j<=n;j++){
			dp[j]=min(dp[j],dp[j-a[i]]+1);
		}
	}
	ans=dp[n];
	printf("%lld",ans);
	return 0;
}

