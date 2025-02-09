#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=2e5+5,maxM=1e5+5;
int n,m,f[maxN];
struct data{
	int p,q,r;
}d[maxM];
inline bool cmp(data a,data b){
	return a.r>b.r;
}
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
		scanf("%lld%lld%lld",&d[i].p,&d[i].q,&d[i].r);
	}
	sort(d+1,d+m+1,cmp);
	for (int i=1;i<=m;i++){
		merge(d[i].p,d[i].q+n);
		merge(d[i].q,d[i].p+n);
		if (find(d[i].p)==find(d[i].p+n) || find(d[i].q)==find(d[i].q+n)){
			printf("%lld",d[i].r);
			return 0;
		}
	}
	printf("0");
	return 0;
}

