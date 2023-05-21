#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxN=1e4;
const int mod=1e6+7;
int a[maxN];
int f[maxN][maxN];
int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("nightingale.in","r",stdin);
//		freopen("nightingale.out","w",stdout);
//	#endif
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	f[0][0]=1;
	for (int i=1;i<=n;i++){
		for (int j=0;j<=m;j++){
			for (int k=0;k<=a[i];k++){
				f[i][j]=(f[i][j]+f[i-1][j-k])%mod;
			}
		}
	}
	printf("%d",f[n][m]);
	return 0;
}

