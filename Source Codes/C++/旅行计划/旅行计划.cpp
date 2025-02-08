#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxN=1e5+5,maxM=2e5+5;
int n,m,cnt,u,v;
int first[maxN],dp[maxN],du[maxN];
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
		scanf("%lld%lld",&u,&v);
		add(u,v);
		du[v]++;
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			dp[i]=1;
			q.push(i);
		}
	}
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			dp[v]=max(dp[v],dp[u]+1);
			du[v]--;
			if (du[v]==0){
				q.push(v);
			}
		}
	}
	for (int i=1;i<=n;i++){
		printf("%lld\n",dp[i]);
	}
	return 0;
}

