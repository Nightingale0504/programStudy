#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e3+5,maxE=1e6+5;
int n,k,cnt,u,v;
int f[maxN],x[maxN],y[maxN];
struct node{
	int x,y;
	double r;
}edge[maxE];
inline bool cmp(node a,node b){
	return a.r<b.r;
}
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
inline double distance(double x1,double x2,double y1,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		f[i]=i;
	} 
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			cnt++;
			edge[cnt].x=i;
			edge[cnt].y=j;
			edge[cnt].r=distance(x[i],x[j],y[i],y[j]);
		}
	}
	sort(edge+1,edge+cnt+1,cmp);
	for (int i=1;i<=cnt;i++){
		u=edge[i].x;
		v=edge[i].y;
		if (find(u)!=find(v)){
			if (n==k){
				printf("%.2lf",edge[i].r);
				return 0;
			}
			merge(u,v);
			n--;
		}
	}
	return 0;
}

