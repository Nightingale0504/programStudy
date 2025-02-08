#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxN=1e4+5;
int t,n,m,a[maxN][maxN],dp[105][maxN]; 
int main(){
	scanf("%d",&t);
	scanf("%d",&n);
	scanf("%d",&m);
	for (int i=0;i<t;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<t;i++){
		for (int j=0;j<n;j++){
			for (int k=a[i][j];k<=m;k++){
				dp[i][k]=max(dp[i][k],dp[i][k-a[i][j]]+a[i+1][j]-a[i][j]);
			}
		}
		m+=dp[i][m];
	}
	printf("%d",m);
	return 0;
}


