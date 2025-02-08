#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m;
int a[1005][1005];
int p,q;
bool book[1005];
void dfs(int x){
	printf("%lld ",x);
	for (int i=1;i<=n;i++){
		if (a[x][i]==1 && book[i]==0){
			book[i]=1;
			dfs(i);
		}
	}
	return;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld%lld",&p,&q);
		a[p][q]=a[q][p]=1;
	}
	book[1]=1;
	dfs(1);
	return 0;
}

