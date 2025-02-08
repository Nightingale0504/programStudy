#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=6e3+5;
int n,cnt,u,v,root,a[maxN],first[maxN],du[maxN];
int dp[maxN][2];
struct node{
	int to,next;
}edge[maxN];
inline void add(int x,int y){
	edge[++cnt].to=y;
	edge[cnt].next=first[x];
	first[x]=cnt;
}
inline void dfs(int x){
	dp[x][0]=0;
	dp[x][1]=a[x];
	for (int i=first[x];i!=0;i=edge[i].next){
		int y=edge[i].to;
		dfs(y);
		dp[x][0]+=max(dp[y][0],dp[y][1]);
		dp[x][1]+=dp[y][0];
	}
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n-1;i++){
		scanf("%lld%lld",&u,&v);
		du[u]++;
		add(v,u);
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			root=i;
		}
	}
	dfs(root);
	printf("%lld",max(dp[root][0],dp[root][1]));
	return 0;
}

