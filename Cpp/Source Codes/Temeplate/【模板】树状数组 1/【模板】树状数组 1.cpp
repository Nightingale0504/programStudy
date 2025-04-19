#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5*1e5+5;
int n,m,t;
int tree[maxN];
int opt,x,k,core;
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
		scanf("%lld",&t);
		update(i,t);
	}
	while (m--){
		scanf("%lld%lld%lld",&opt,&x,&k);
		switch (opt){
			case 1:{
				update(x,k);
				break;
			}
			case 2:{
				core=sum(k)-sum(x-1);
				printf("%lld\n",core);
				break;
			}
		}
	}
	return 0;
}

