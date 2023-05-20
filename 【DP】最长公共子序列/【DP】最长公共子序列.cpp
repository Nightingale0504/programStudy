#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define maxN 1010
// LIS -- 最长递增子序列
// LCS -- 最长公共子序列 
int n,m;
int a[maxN],b[maxN];
int dp[maxN][maxN];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=m;i++){
		scanf("%lld",&b[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	printf("%lld\n",dp[n][m]);
	return 0;
}

