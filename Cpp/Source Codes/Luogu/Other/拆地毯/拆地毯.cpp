#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,k,f[maxN];
int ans,t;
struct node{
	int p,q,r;
}edge[maxN];
inline bool cmp(node a,node b){
	return a.r>b.r;
}
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=1;i<=n;i++){
		f[i]=i;
	}
	for (int i=1;i<=m;i++){
		scanf("%lld%lld%lld",&edge[i].p,&edge[i].q,&edge[i].r);
	}
	sort(edge+1,edge+m+1,cmp);
	for (int i=1;i<=m;i++){
		int l=find(edge[i].p),r=find(edge[i].q);
		if (l!=r){
			merge(find(edge[i].p),edge[i].q);
			ans+=edge[i].r;
			t++;
		}
		if (t>=k){
			break;
		}
	}
	printf("%lld",ans);
	return 0;
}

