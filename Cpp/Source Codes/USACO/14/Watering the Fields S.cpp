#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int p,q,r;
}edge[4000005];
int f[4000005];
int x[20005],y[20005];
int n,c,sum,num,cnt;
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
	scanf("%lld%lld",&n,&c);
	for (int i=0;i<n;i++){
		f[i]=i;
	}
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			edge[cnt].p=i;
			edge[cnt].q=j;
			edge[cnt++].r=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
		}
	}
	sort(edge,edge+cnt,cmp);
	for (int i=0;i<cnt;i++){
		if (find(edge[i].p)!=find(edge[i].q) && edge[i].r>=c){
			merge(edge[i].p,edge[i].q);
			num++;
			sum+=edge[i].r;
			if (num==n-1){
				printf("%lld",sum);
				exit(0);
			}
		}
	}
	printf("-1");
	return 0;
}

