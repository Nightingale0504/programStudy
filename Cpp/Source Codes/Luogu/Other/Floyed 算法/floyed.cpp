#include<iostream>
#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
#define int long long
int n,m,a[4505][4505],p,q,r;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i==j){
				a[i][j]=0;
			}else{
				a[i][j]=INT_MAX;
			}
		}
	}
	while (m--){
		scanf("%lld%lld%lld",&p,&q,&r);
		a[p][q]=a[q][p]=r;
	}
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

