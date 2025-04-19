#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,sum,num=1;
struct node{
	int p,q,r;
}a[200005];
int parent[5005];
inline bool cmp(node x,node y){
	return x.r<y.r;
}
inline int find(int x){
	return x==parent[x] ? x : parent[x]=find(parent[x]);
}
inline void merge(int i,int j){
	parent[find(j)]=find(i);
}
signed main(){
	// Solution: kruskal
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		parent[i]=i;
	}
	for (int i=0;i<m;i++){
		scanf("%lld%lld%lld",&a[i].p,&a[i].q,&a[i].r);
	}
	sort(a,a+m,cmp);
	for (int i=0;i<m;i++){
		if (find(a[i].p)!=find(a[i].q)){
			sum+=a[i].r;
			merge(a[i].p,a[i].q);
			num++;
			if (num==n){
				printf("%lld",sum);
				exit(0);
			}
		}
	}
	printf("orz");
	return 0;
}

