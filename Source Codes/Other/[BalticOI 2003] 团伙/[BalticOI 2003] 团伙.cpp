#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=2e3+5;
int n,m,f[maxN],ans;
char opt;
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
	while (m--){
		int p,q;
		cin>>opt>>p>>q;
		if (opt=='F'){
			merge(p,q);
		}else if (opt=='E'){
			merge(p,q+n);
			merge(q,p+n);
		}
	}
	for (int i=1;i<=n;i++){
		if (find(i)==i){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

