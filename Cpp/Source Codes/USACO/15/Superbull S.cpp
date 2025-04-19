#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=4e6+5;
const int maxM=2005;
struct node{
	int p,q,r;
}a[maxN];
int n,x[maxM],f[maxM],cnt,sum,num;
inline bool cmp(node x,node y){
	return x.r>y.r;
}
inline int find(int x){
	if (x==f[x]){
		return x;
	}
	return f[x]=find(f[x]);
}
inline void merge(int i,int j){
	f[find(j)]=find(i);
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&x[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			a[cnt].p=i;
			a[cnt].q=j;
			a[cnt++].r=x[i]^x[j];
		}
	}
	stable_sort(a,a+cnt,cmp);
	for (int i=0;i<n;i++){
		f[i]=i;
	}
	for (int i=0;i<cnt;i++){
		if (find(a[i].p)!=find(a[i].q)){
			merge(a[i].p,a[i].q);
			sum+=a[i].r;
			num++;
			if (num==n-1){
				printf("%lld",sum);
				return 0;
			}
		}
	}
	return 0;
}

