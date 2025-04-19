#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int p,q,r;
}edge[10005];
int f[10005];
int n,m,k,num,sum;
inline bool cmp(node x,node y){
	return x.r<y.r;
}
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=0;i<n;i++){
		f[i]=i;
	}
	for (int i=0;i<m;i++){
		scanf("%lld%lld%lld",&edge[i].p,&edge[i].q,&edge[i].r);
	}
	sort(edge,edge+m,cmp);
	for (int i=0;i<m;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			merge(edge[i].p,edge[i].q);
			num++;
			sum+=edge[i].r;
			if (num==n-k){
				printf("%lld",sum);
				exit(0);
			}
		}
	}
	printf("No Answer");
	return 0;
}

