#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#define int long long
using namespace std;
const int maxN=105;
int ans;
int n,a[maxN],dp1[maxN],dp2[maxN],tmp;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		dp1[i]=1;
		dp2[i]=1;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<i;j++){
			if (a[i]>a[j]){
				dp1[i]=max(dp1[i],dp1[j]+1);
			}
		}
	}
	for (int i=n;i>=1;i--){
		for (int j=i+1;j<=n;j++){
			if (a[i]>a[j]){
				dp2[i]=max(dp2[i],dp2[j]+1);
			}
		}
	}
	for (int i=1;i<=n;i++){
		tmp=dp1[i]+dp2[i]-1;
		ans=max(ans,tmp);
	}
	ans=n-ans;
	printf("%lld",ans);
	return 0;
}

