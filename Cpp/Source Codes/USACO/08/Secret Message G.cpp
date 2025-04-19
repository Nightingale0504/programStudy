#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,m,t,cnt=1,ans,tree[maxN][2],num[maxN],sum[maxN],f[maxN];
inline void initArray(){
	for (int i=0;i<maxN;i++){
		tree[i][0]=tree[i][1]=-1;
	}
} 
inline void insert(int s[]){
	int p=1;
	for (int i=1;i<=t;i++){
		int u=s[i];
		if (tree[p][u]==-1){
			tree[p][u]=++cnt;
		}
		p=tree[p][u];
		sum[p]++;
	}
	num[p]++;
}
inline int query(int s[]){
	int p=1,res=0;
	for (int i=1;i<=t;i++){
		int u=s[i];
		if (tree[p][u]==-1){
			return res;
		}else{
			p=tree[p][u];
			res+=num[p];
		}
	}
	res-=num[p];
	res+=sum[p];
	return res;
}
signed main(){
	initArray();
	scanf("%lld%lld",&m,&n);
	for (int i=1;i<=m;i++){
		scanf("%lld",&t);
		for (int j=1;j<=t;j++){
			scanf("%lld",&f[j]);
		}
		insert(f);
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&t);
		for (int j=1;j<=t;j++){
			scanf("%lld",&f[j]);
		}
		ans=query(f);
		printf("%lld\n",ans);
	}
	return 0;
}

