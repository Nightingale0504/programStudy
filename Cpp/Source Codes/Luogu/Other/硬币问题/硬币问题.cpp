#include<bits/stdc++.h> 
using namespace std;
#define int long long
#define maxN 1000005
int n,dp[maxN];
signed main(){
	scanf("%lld",&n);
	dp[5]=dp[11]=1;
	for (int i=1;i<=n;i++){
		if (i<5){
			dp[i]=i;
		}else if (i<11){
			dp[i]=dp[5]+dp[i-5];
		}else{
			dp[i]=min(dp[5]+dp[i-5],dp[11]+dp[i-11]);
		}
	}
	printf("%lld",dp[n]);
	return 0;
}

