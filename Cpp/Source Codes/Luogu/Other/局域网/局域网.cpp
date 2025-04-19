#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int p,q,r;
}edge[1000005];
int f[105];
int n,k,ans,sum,cnt;
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
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		f[i]=i;
	}
	for (int i=0;i<k;i++){
		scanf("%lld%lld%lld",&edge[i].p,&edge[i].q,&edge[i].r);
		ans+=edge[i].r;
	}
	sort(edge,edge+k,cmp);
	for (int i=0;i<k;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			sum+=edge[i].r;
			merge(edge[i].p,edge[i].q);
			cnt++;
			if (cnt==n-1){
				ans-=sum;
				printf("%lld",ans);
				exit(0);
			}
		}
	}
	return 0;
}

