#include<bits/stdc++.h> 
using namespace std;
#define int long long
#define maxN 200005
int n,a[maxN],mmax=INT_MIN,dp[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n;i++){
		dp[i]=max(a[i],a[i]+dp[i-1]);
		mmax=max(mmax,dp[i]);
	}
	cout<<mmax;
	return 0;
}

