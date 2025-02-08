#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define int long long
int n,m;
int u,v;
int p,q,f;
int a[1005][1005];
int book[1005];
bool flag,connect=true;
void dfs(int x){
	if (flag){
		return;
	}
	if (x==v){
		flag=true;
		return;
	}
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
	scanf("%lld%lld",&u,&v);
	for (int i=1;i<=n;i++){
		if (i==u || i==v){
			continue;
		}
		memset(book,0,sizeof(book));
		book[i]=book[u]=1;
		flag=false;
		dfs(u);
		if (!flag){
			connect=false;
			f++;
		}
	}
	connect ? printf("-1") : printf("%lld",f);
	return 0;
}

