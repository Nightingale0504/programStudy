#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e4+5,maxM=5e4+5;
int n,m,cnt,u,v,mmax;
int f[maxN],du[maxN],first[maxN],dp[maxN];
struct node{
	int to,next;
}edge[maxM];
inline void add(int u,int v){
	cnt++;
	edge[cnt].to=v;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
queue<int> q;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&f[i]);
	}
	while (m--){
		scanf("%lld%lld",&u,&v);
		add(v,u);
		du[u]++;
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			q.push(i);
			dp[i]=f[i];
		}
	}
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			dp[v]=max(dp[v],dp[u]+f[v]);
			du[v]--;
			if (du[v]==0){
				q.push(v);
			}
		}
	}
	for (int i=1;i<=n;i++){
		mmax=max(mmax,dp[i]);
	}
	printf("%lld",mmax);
	return 0;
}

