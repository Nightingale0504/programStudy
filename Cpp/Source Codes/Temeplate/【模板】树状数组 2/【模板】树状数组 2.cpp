#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5*1e5+5;
int n,m,opt,x,y,k,core;
int tree[maxN],a[maxN];
inline int lowbit(int x){
	return (x & (-x));
}
inline void update(int i,int val){
	while (i<=n){
		tree[i]+=val;
		i+=lowbit(i);
	}
}
inline int sum(int i){
	int ans=0;
	while (i>0){
		ans+=tree[i];
		i-=lowbit(i);
	}
	return ans;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		update(i,a[i]-a[i-1]);
	}
	while (m--){
		scanf("%lld",&opt);
		switch (opt){
			case 1:{
				scanf("%lld%lld%lld",&x,&y,&k);
				update(x,k);
				update(y+1,-k);
				break;
			}
			case 2:{
				scanf("%lld",&x);
				core=sum(x);
				printf("%lld\n",core);
				break;
			}
		}
	}
	return 0;
}

