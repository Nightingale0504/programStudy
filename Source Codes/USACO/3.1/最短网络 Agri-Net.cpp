#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
#define int long long
struct node{
	int p,q,r;
}edge[10005];
int f[105];
int n,k,cnt,sum,num;
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
	scanf("%lld",&n);
	for (register int i=0;i<n;i++){
		f[i]=i;
		for (register int j=0;j<n;j++){
			scanf("%lld",&k);
			if (j>i){
				edge[cnt].p=i;
				edge[cnt].q=j;
				edge[cnt].r=k;
				cnt++;
			}
		}
	}
	sort(edge,edge+cnt,cmp);
	for (register int i=0;i<cnt;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			merge(edge[i].p,edge[i].q);
			num++;
			sum+=edge[i].r;
			if (num==n-1){
				printf("%lld",sum);
				exit(0);
			}
		}
	}
	return 0;
}

