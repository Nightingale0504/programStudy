#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxN=1e4+5,maxM=1e6+5;
int n,u,v,t,cnt,mmax;
int len[maxN],du[maxN],dp[maxN],first[maxN];
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
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&t,&len[i]);
		while (scanf("%lld",&t) && t!=0){
			add(t,i);
			du[i]++;
		}
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			q.push(i);
			dp[i]=len[i];
		}
	}
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			dp[v]=max(dp[v],dp[u]+len[v]);
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

