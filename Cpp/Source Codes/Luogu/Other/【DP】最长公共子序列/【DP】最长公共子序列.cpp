#include<bits/stdc++.h> 
using namespace std;
#define int long long
#define maxN 1010
// LIS -- �����������
// LCS -- ����������� 
int n,m;
int a[maxN],b[maxN];
int dp[maxN][maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=m;i++){
		scanf("%lld",&b[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	printf("%lld\n",dp[n][m]);
	return 0;
}

