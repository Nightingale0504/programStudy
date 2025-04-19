#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=105;
int n,m,a[maxN][maxN];
int u,v,t,d;
int s,e;
bool book[maxN][maxN];
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
	for (int i=1;i<=m;i++){
		scanf("%lld%lld%lld",&u,&v,&t);
		a[u][v]=a[v][u]=t;
	}
	scanf("%lld",&d);
	for (int i=1;i<=d;i++){
		scanf("%lld%lld",&u,&v);
		book[u][v]=book[v][u]=true;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (a[i][j]!=INT_MAX && book[i][j]==false){
				a[i][j]=a[j][i]=0;
			}
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
	scanf("%lld%lld",&s,&e);
	printf("%lld",a[s][e]);
	return 0;
}

