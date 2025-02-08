#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
#define int long long
const int inf=INT_MAX;
const int maxN=10005;
const int maxM=500005;
int n,m,s,numEdge=0;
int dis[maxN],vis[maxN],head[maxM];
struct Edge{
  int next,to,dis;
}edge[maxM];
void addEdge(int from,int to,int dis){
  edge[++numEdge].next=head[from];
  edge[numEdge].to=to;
  edge[numEdge].dis=dis;
  head[from]=numEdge;
}
void spfa(){
  queue<int>q;
  for (int i=1;i<=n;i++){
    dis[i]=inf;
    vis[i]=0;
  }
  q.push(s);
  dis[s]=0;
  vis[s]=1;
  while (!q.empty()){
    int u=q.front();
    q.pop();
	vis[u]=0;
    for (int i=head[u];i;i=edge[i].next){
      int v=edge[i].to;
      if (dis[v]>dis[u]+edge[i].dis){
        dis[v]=dis[u]+edge[i].dis;
        if (vis[v]==0){
          vis[v]=1;
          q.push(v);
        }
      }
    }
  }
}
signed main(){
	scanf("%lld%lld%lld",&n,&m,&s);
	for (int i=1;i<=m;i++){
    	int f,g,w;
    	scanf("%lld%lld%lld",&f,&g,&w);
    	addEdge(f,g,w);
  	}
  	spfa();
  	for(int i=1; i<=n; i++)
    	if (s==i){
    		printf("0 ");
		}else{
      		printf("%lld ",dis[i]);
		}
	return 0;
}

