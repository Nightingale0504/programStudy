#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxN=5e3+5,maxM=5e5+5,mod=80112002;
int n,m,u,v,cnt,first[maxN],ans;
int id[maxN],od[maxN],dp[maxN];
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
	while (m--){
		scanf("%lld%lld",&v,&u);
		add(u,v);
		id[v]++;
		od[u]++;
	}
	for (int i=1;i<=n;i++){
		if (id[i]==0){
			q.push(i);
			dp[i]=1;
		}
	}
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			dp[v]=(dp[u]+dp[v])%mod;
			id[v]--;
			if (id[v]==0){
				q.push(v);
			}
		}
	}
	for (int i=1;i<=n;i++){
		if (od[i]==0){
			ans=(ans+dp[i])%mod;
		}
	}
	printf("%lld",ans);
	return 0;
}

