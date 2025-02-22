#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,f[maxN],ans;
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		f[i]=i;
	}
	while (m--){
		int p,q;
		scanf("%lld%lld",&p,&q);
		merge(p,q);
	}
	for (int i=1;i<=n;i++){
		if (f[i]==i){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

