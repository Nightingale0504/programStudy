#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x,ans;
inline int judge(int n){
	if (n==0){
		return 0;
	}else{
		return 1;
	}
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&x);
	ans=judge(x);
	printf("%lld",ans);
	return 0;
}

