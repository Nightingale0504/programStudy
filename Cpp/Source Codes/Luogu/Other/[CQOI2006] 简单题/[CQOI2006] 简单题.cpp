#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,opt,x,k,core;
int tree[maxN];
inline int lowbit(int x){
	return (x & (-x));
}
inline void update(int i){
	while (i<=n){
		tree[i]^=1;
		i+=lowbit(i);
	}
}
inline int sum(int i){
	int ans=0;
	while (i>0){
		ans^=tree[i];
		i-=lowbit(i);
	}
	return ans;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld",&opt);
		switch (opt){
			case 1:{
				scanf("%lld%lld",&x,&k);
				update(x);
				update(k+1);
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

