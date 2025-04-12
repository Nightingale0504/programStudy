#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=105,maxH=55005;
int n,h,ans=INT_MAX;
int p[maxN],c[maxN],dp[maxH];
signed main(){
	scanf("%lld%lld",&n,&h);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&p[i],&c[i]);
	}
	for (int i=1;i<=55000;i++){
		dp[i]=INT_MAX;
	}
	for (int i=1;i<=n;i++){
		for (int j=p[i];j<=55000;j++){
			dp[j]=min(dp[j],dp[j-p[i]]+c[i]);
		}
	}
	for (int i=h;i<=55000;i++){
		ans=min(ans,dp[i]);
	}
	printf("%lld",ans);
	return 0;
}

