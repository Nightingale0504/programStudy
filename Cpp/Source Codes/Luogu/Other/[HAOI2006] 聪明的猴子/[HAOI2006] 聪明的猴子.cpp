#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int p,q;
	double r;
}edge[1000005];
int f[1005],x[1005],y[1005],s[505];
int n,m,num,ans,cnt;
double sum;
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
	scanf("%lld",&m);
	for (int i=0;i<m;i++){
		scanf("%lld",&s[i]);
	}
	scanf("%lld",&n);
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
			edge[cnt++].r=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	sort(edge,edge+cnt,cmp);
	for (int i=0;i<cnt;i++){
		if (find(edge[i].p)!=find(edge[i].q)){
			num++;
			merge(edge[i].p,edge[i].q);
			if (num==n-1){
				sum=edge[i].r;
				break;
			}
		}
	}

	for (int i=0;i<m;i++){
		if (sum<=s[i]){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

