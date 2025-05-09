#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,p,q,c,cnt,first[maxN],dp[maxN],mmax;
struct node{
	int to,next;
}edge[2*maxN];
inline void add(int p,int q){
	edge[++cnt].to=q;
	edge[cnt].next=first[p];
	first[p]=cnt;
}
inline void dfs(int x,int fa){
	for (int i=first[x];i;i=edge[i].next){
		int y=edge[i].to;
		if (y==fa){
			continue;
		}
		dfs(y,x);
		mmax=max(mmax,dp[x]+dp[y]+1);
		dp[x]=max(dp[x],dp[y]+1);
	}
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n-1;i++){
		scanf("%lld%lld",&p,&q);
		add(p,q);
		add(q,p);
	}
	dfs(1,0);
	printf("%lld",mmax);
	return 0;
}

