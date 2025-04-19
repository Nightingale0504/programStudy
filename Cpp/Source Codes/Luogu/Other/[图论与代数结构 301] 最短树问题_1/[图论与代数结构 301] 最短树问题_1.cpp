#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,num,sum;
struct node{
	int p,q,r;
}edge[4000005];
int f[2005];
inline bool cmp(node a,node b){
	return a.r<b.r;
}
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (register int i=0;i<n;i++){
		f[i]=i;
	}
	for (register int i=0;i<m;i++){
		scanf("%lld%lld%lld",&edge[i].p,&edge[i].q,&edge[i].r);
	}
	sort(edge,edge+m,cmp);
	for (register int i=0;i<m;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			num++;
			merge(edge[i].p,edge[i].q);
			sum+=edge[i].r;
			if (num==n-1){
				printf("%lld",sum);
				exit(0);
			}
		}
	}
	return 0;
}

