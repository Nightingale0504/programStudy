#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,x,y,ans;
int f[1000005];
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
signed main(){
	while (true){
		ans=0;
		scanf("%lld",&n);
		if (n==0){
			exit(0);
		}
		scanf("%lld",&m);
		for (int i=1;i<=n;i++){
			f[i]=i;
		}
		for (int i=1;i<=m;i++){
			scanf("%lld%lld",&x,&y);
			merge(x,y);
		}
		for (int i=1;i<=n;i++){
			if (find(i)==i){
				ans++;
			}
		}
		ans--;
		printf("%lld\n",ans);
	}
	return 0;
}

