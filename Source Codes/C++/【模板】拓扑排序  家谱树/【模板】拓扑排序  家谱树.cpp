#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxE=1e5+5;
int n,cnt,u,v,t,first[105],du[105];
struct node{
	int to,next;
}edge[maxE]; 
inline void add(int u,int v){
	cnt++;
	edge[cnt].to=v;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
queue<int> que;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		while (true){
			scanf("%lld",&t);
			if (t==0){
				break;
			}
			add(i,t);
			du[t]++;
		}
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			que.push(i);
		}
	}
	while (!que.empty()){
		u=que.front();
		printf("%lld ",u);
		que.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			du[v]--;
			if (du[v]==0){
				que.push(v);
			}
		}
	}
	return 0;
}

