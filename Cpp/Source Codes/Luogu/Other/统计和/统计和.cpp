#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,w,x,k,t;
int core;
int tree[maxN];
char opt;
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
	scanf("%lld%lld",&n,&w);
	while (w--){
		cin>>opt>>x>>k;
		switch (opt){
			case 'x':{
				update(x,k);
				break;
			}
			case 'y':{
				core=sum(k)-sum(x-1);
				printf("%lld\n",core);
				break;
			}
		}
	}
	return 0;
}

