#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int maxN=5005;
int n,ans;
int a[maxN],dp[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		dp[i]=1;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<i;j++){
			if (a[i]>a[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		ans=max(ans,dp[i]);
	}
	printf("%lld",ans);
	return 0;
}

