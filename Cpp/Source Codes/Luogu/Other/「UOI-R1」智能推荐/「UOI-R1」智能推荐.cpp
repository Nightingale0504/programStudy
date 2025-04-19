#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5e6+5,maxR=5e6+5;
int n,k,p,r,u,v,cnt,num;
int first[maxN],du[maxN],f[maxN],dp[maxN];
bool flag;
struct node{
	int to,next;
}edge[maxR];
inline void add(int u,int v){
	cnt++;
	edge[cnt].to=v;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
queue<int> q;
signed main(){
	scanf("%lld%lld%lld",&n,&k,&p);
	for (int i=0;i<maxN;i++){
		dp[i]=INT_MAX;
	}
	for (int i=1;i<=p;i++){
		scanf("%lld",&f[i]);
		if (f[i]==k){
			flag=true;
		}
	}
	scanf("%lld",&r);
	while (r--){
		scanf("%lld%lld",&u,&num);
		while (num--){
			scanf("%lld",&v);
			add(v,u);
			du[u]++;
			if (u==k){
				flag=true;
			}
		}
	}
	for (int i=1;i<=n;i++){
		if (du[i]==0){
			q.push(i);
			dp[i]=0; 
		}
	}
	if (!flag){
		printf("-1");
		return 0;
	}
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i=first[u];i!=0;i=edge[i].next){
			v=edge[i].to;
			du[v]--;
			if (du[v]==0){
				q.push(v);
				dp[v]=min(dp[v],dp[u]+1);
			}
		}
	}
	if (dp[k]==dp[0]){
		printf("-1");
	}else{
		printf("%lld",dp[k]);
	}
	return 0;
}

