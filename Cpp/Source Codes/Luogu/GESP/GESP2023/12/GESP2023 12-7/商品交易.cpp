#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int maxN=1e5+5,maxM=2e5+5;
int n,m,a,b,cnt,first[maxN],u,v,w; 
int dis[maxN],vis[maxN],tong[maxN],num[maxN];
queue<int> que;
struct node{
	int to,w,next;
}edge[maxM];
inline void add(int u,int v,int w){
	edge[++cnt].to=v;
	edge[cnt].w=w;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
signed main() {
	scanf("%lld%lld%lld%lld",&n,&m,&a,&b);
	for (int i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
	for (int i=1;i<=m;i++){
		scanf("%lld%lld",&u,&v);
		add(u,v,num[v]+1-num[u]);
	}
    fill(dis,dis+n+1,INT_MAX);
	dis[a]=0;  
	que.push(a);
	vis[a]=1;
	while (!que.empty()){
		u=que.front();
		que.pop();
		vis[u]=0;
		for (int i=first[u];i;i=edge[i].next){
			v=edge[i].to;
			if (dis[v]>dis[u]+edge[i].w){
				dis[v]=dis[u]+edge[i].w;
				if (vis[v]==0){
					vis[v]=1;
					que.push(v);
				}
			}
		}
	}
	if(dis[b]==INT_MAX){
        printf("No solution");
    }else{
        printf("%lld",dis[b]);
    }
	return 0;
}