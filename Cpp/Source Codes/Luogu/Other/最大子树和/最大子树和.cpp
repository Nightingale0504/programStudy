#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e4+6e3+5;
int n,cnt,u,v,mmax=INT_MIN,a[maxN],first[maxN],du[maxN],dp[maxN],ans[maxN];
struct node{
	int to,next;
}edge[maxN];
inline void add(int x,int y){
	edge[++cnt].to=y;
	edge[cnt].next=first[x];
	first[x]=cnt;
}
inline void dfs(int x){
	dp[x]=a[x];
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n-1;i++){
		scanf("%lld%lld",&u,&v);
		add(u,v);
		add(v,u);
		du[u]++;
	}
	for (int i=1;i<=n;i++){
		
	}
	for (int i=1;i<=n;i++){
		mmax=max(mmax,ans[i]);
	}
	printf("%lld",mmax);
	return 0;
}

