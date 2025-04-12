#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=105;
int n,w[maxN],a[maxN][maxN];
int u,v,ans=INT_MAX;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			a[i][j]=INT_MAX;
		}
	}
	for (int i=1;i<=n;i++){
		scanf("%lld%lld%lld",&w[i],&u,&v);
		if (u!=0){
			a[i][u]=1;
			a[u][i]=1;
		}
		if (v!=0){
			a[i][v]=1;
			a[v][i]=1;
		}
	}
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				if (a[i][k]+a[j][k]<a[i][j]){
					a[i][j]=a[i][k]+a[j][k];
				}
			}
		}
	}
	for (int i=1;i<=n;i++){
		int tmp=0;
		for (int j=1;j<=n;j++){
			if (i!=j){
				tmp+=w[j]*a[j][i];
			}
		}
		ans=min(ans,tmp);
	}
	printf("%lld",ans);
	return 0;
}

