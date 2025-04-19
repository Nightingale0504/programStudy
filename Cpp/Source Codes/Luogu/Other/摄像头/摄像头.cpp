#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,m,u,v,ans,cnt,du[maxN],first[maxN],a[maxN];
bool book[maxN];
queue<int> que;
struct node{
	int to,next;
}edge[maxN];
inline void add(int u,int v){
	cnt++;
	edge[cnt].to=v;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&u,&m);
		a[i]=u;
		book[u]=true;
		while (m--){
			scanf("%lld",&v);
			add(u,v);
			du[v]++;
		}
	}
	for (int i=1;i<=n;i++){
		int t=a[i];
		if (du[t]==0){
			que.push(i);
		}
	}
	while (!que.empty()){
		ans++;
		u=que.front();
		que.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			du[v]--;
			if (du[v]==0 && book[v]){
				que.push(v);
			}
		}
	}
	if (ans==n){
		printf("YES");
	}else{
		printf("%lld",n-ans);
	}
	return 0;
}

