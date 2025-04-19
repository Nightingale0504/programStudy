#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int p,q,r;
}edge[100005];
int f[305];
int n,m,num,sum;
inline bool cmp(node x,node y){
	return x.r<y.r;
}
inline int find(int x){
	f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		f[i]=i;
	}
	for (int i=0;i<m;i++){
		scanf("%lld%lld%lld",&edge[i].p,&edge[i].q,&edge[i].r);
	}
	sort(edge,edge+m,cmp);
	for (int i=0;i<m;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			sum=edge[i].r;
			merge(edge[i].p,edge[i].q);
			num++;
			if (num==n-1){
				break;
			}
		}
	}
	printf("%lld %lld",n-1,sum);
	return 0;
}

