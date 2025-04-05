#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,ans;
int dp[110];
int a[110][110];
int b[110][110];
void solve(int j){
	memset(dp,0,sizeof(dp));
	for (int i=1;i<=n;i++){
		dp[i]=max(b[j][i],b[j][i]+dp[i-1]);
		ans=max(ans,dp[i]);
	}
}
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		for (int j=1;j<=n;j++){
			for (int k=1;k<=n;k++){
				b[j][k]=a[j][k]+b[j-1][k];
			}
			solve(j);
		}
	}
	printf("%d\n",ans);
	return 0;
}

