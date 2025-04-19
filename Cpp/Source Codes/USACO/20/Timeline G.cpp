#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,c,cnt,u,v,w;
int s[maxN],first[maxN],du[maxN];
struct node{
	int to,next,w;
}edge[maxN];
inline void add(int u,int v,int w){
	cnt++;
	edge[cnt].to=v;
	edge[cnt].w=w;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
queue<int> q;
signed main(){
	scanf("%lld%lld%lld",&n,&m,&c);
	for (int i=1;i<=n;i++){
		scanf("%lld",&s[i]);
	}
	while (c--){
		scanf("%lld%lld%lld",&u,&v,&w);
		add(u,v,w);
		du[v]++;
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			q.push(i);
		}
	}
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			w=edge[i].w;
			s[v]=max(s[v],s[u]+w);
			du[v]--;
			if (du[v]==0){
				q.push(v);
			}
		}
	}
	for (int i=1;i<=n;i++){
		printf("%lld\n",s[i]);
	}
	return 0;
}

