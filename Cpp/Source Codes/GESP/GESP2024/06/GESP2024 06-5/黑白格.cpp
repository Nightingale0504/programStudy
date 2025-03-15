#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=105;
int n,m,k,ans=LLONG_MAX,dp[maxN][maxN];
char t;
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf(" %c",&t);
			dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+t-'0';
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			for (int x=i;x<=n;x++){
				for (int y=j;y<=m;y++){
					int sum=dp[x][y]-dp[i-1][y]-dp[x][j-1]+dp[i-1][j-1],area=(x-i+1)*(y-j+1);
					if (sum>=k){
						ans=min(ans,area);
					}
				}
			}
		}
	}
	if (ans==LLONG_MAX){
		printf("0");
	}else{
		printf("%lld",ans);
	}
	return 0;
}

