#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2005;
string s[maxN];
int dp[maxN],n,ans;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		cin>>s[i];
		dp[i]=1;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<i;j++){
			if (s[i].find(s[j])==0){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		ans=max(ans,dp[i]);
	}
	printf("%lld",ans);
	return 0;
}

