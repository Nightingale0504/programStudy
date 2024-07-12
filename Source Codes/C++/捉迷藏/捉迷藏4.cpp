#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int m,n,dp[1005][1005],map[1005][1005];
#define int long long
signed main(){
	scanf("%lld%lld",&m,&n);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%lld",&map[i][j]);
		}
	}
	dp[1][1]=map[1][1];
	for (int i=2;i<=n;i++){
		dp[1][i]=dp[1][i-1]+map[1][i];
	}
	for (int i=2;i<=m;i++){
		dp[i][1]=dp[i-1][1]+map[i][1];
	}
	for (int i=2;i<=m;i++){
		for (int j=2;j<=n;j++){
			dp[i][j]=map[i][j]+min(dp[i-1][j],dp[i][j-1]);
		}
	}
	printf("%lld",dp[m][n]);
	return 0;
}

