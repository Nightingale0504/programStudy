#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1005;
int n,m; 
int a[maxN][maxN],c[maxN];
int u,v,t;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i!=j){
				a[i][j]=INT_MAX;
			}else{
				a[i][j]=0;
			}
		}
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&c[i]);
	}
	for (int i=1;i<=m;i++){
		scanf("%lld%lld%lld",&u,&v,&t);
		a[u][v]=t+c[v];
		a[v][u]=t+c[u];
	}
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
	printf("%lld",a[1][n]-c[n]);
	return 0;
}

