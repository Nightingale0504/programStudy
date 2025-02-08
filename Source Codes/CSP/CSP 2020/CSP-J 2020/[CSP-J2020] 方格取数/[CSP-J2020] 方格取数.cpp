#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,a[maxN][maxN],dp[maxN][maxN],down[maxN][maxN],up[maxN][maxN]; 
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for (int i=1;i<=n;i++){
		dp[i][1]=dp[i-1][1]+a[i][1];
	}
	for (int j=2;j<=m;j++){
		down[1][j]=dp[1][j-1]+a[1][j];
		for (int i=2;i<=n;i++){
			down[i][j]=max(dp[i][j-1],down[i-1][j])+a[i][j];
		}
		up[n][j]=dp[n][j-1]+a[n][j];
		for (int i=n-1;i>=1;i--){
			up[i][j]=max(dp[i][j-1],up[i+1][j])+a[i][j];
		}
		for (int i=1;i<=n;i++){
			dp[i][j]=max(down[i][j],up[i][j]);
		}
	}
	printf("%lld",dp[n][m]);
	return 0;
}

