#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=2e5+5;
int f[maxN];
int n,m;
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=2*n;i++){
		f[i]=i;
	}
	for (int i=1;i<=m;i++){
		int u,v;
		scanf("%lld%lld",&u,&v);
		if (find(u)==find(v)){
			printf("%lld\n",i);
			return 0;
		}
		merge(u,v+n);
		merge(v,u+n);
	}
	return 0;
}

