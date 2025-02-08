#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
#define int long long
struct node{
	int p,q;
	double r;
}edge[1000005];
int n,m,cnt,num,t1,t2;
int f[1005],x[1005],y[1005];
double sum;
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
inline bool cmp(node a,node b){
	return a.r<b.r;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (register int i=1;i<=n;i++){
		f[i]=i;
	}
	for (register int i=1;i<=n;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
	for (register int i=1;i<=n;i++){
  		for (register int j=i+1;j<=n;j++){
			edge[++cnt].p=i;
			edge[cnt].q=j;
			edge[cnt].r=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	while (m--){
		scanf("%lld%lld",&t1,&t2);
		edge[++cnt].p=t1;
		edge[cnt].q=t2;
		edge[cnt].r=0;
	}
	sort(edge+1,edge+cnt+1,cmp);
	for (register int i=1;i<=cnt;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			num++;
			merge(edge[i].p,edge[i].q);
			sum+=edge[i].r;
			if (num==n-1){
				printf("%.2lf",sum);
				exit(0);
			}
		}
	}
	return 0;
}

