#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m;
int a[1005][1005],p,q,du[100005];
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld%lld",&p,&q);
		a[p][q]=a[q][p]=1;
		du[p]++;
		du[q]++;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	for (int i=1;i<=n;i++){
		
	}
	return 0;
}

