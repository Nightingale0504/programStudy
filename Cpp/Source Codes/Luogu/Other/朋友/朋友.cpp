#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=2e4+10;
int f[maxN];
int n,m,p,q; 
int ans1,ans2;
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld%lld%lld",&n,&m,&p,&q);
	for (int i=1;i<=n+m;i++){
		f[i]=i;
	}
	for (int i=1;i<=p;i++){
		int u,v;
		scanf("%lld%lld",&u,&v);
		merge(u,v);
	}
	for (int i=1;i<=q;i++){
		int u,v;
		scanf("%lld%lld",&u,&v);
		u*=-1;
		v*=-1;
		merge(n+u,n+v);
	}
	for (int i=1;i<=n;i++){
		if (find(i)==find(1)){
			ans1++;
		}
	}
	for (int i=n+1;i<=n+m;i++){
		if (find(i)==find(n+1)){
			ans2++;
		}
	}
	int ans=min(ans1,ans2);
	printf("%lld",ans);
	return 0;
}

