#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=15;
int n,m,ans,dp[maxN][maxN];
char t;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf(" %c",&t);
			dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+t-'0';
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			for (int k=i;k<=n;k++){
				for (int l=j;l<=m;l++){
					int sum=2*(dp[k][l]-dp[i-1][l]-dp[k][j-1]+dp[i-1][j-1]),area=(k-i+1)*(l-j+1);
					if (sum==area){
						ans=max(ans,area);
					}
				}
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

