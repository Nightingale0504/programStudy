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
}edge[2500005];
int x[505],y[505],f[505];
int s,p;
int num,cnt;
double d;
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
inline bool cmp(node x,node y){
	return x.r<y.r;
}
signed main(){
	scanf("%lld%lld",&s,&p);
	for (int i=0;i<p;i++){
		f[i]=i;
	}
	for (int i=0;i<p;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
	for (int i=0;i<p;i++){
		for (int j=i+1;j<p;j++){
			edge[cnt].p=i;
			edge[cnt].q=j;
			edge[cnt++].r=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	sort(edge,edge+cnt,cmp);
	for (int i=0;i<cnt;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			merge(edge[i].p,edge[i].q);
			num++;
			if (num==p-s){
				printf("%.2lf",edge[i].r);
				exit(0);
			}
		}
	}
	return 0;
}

