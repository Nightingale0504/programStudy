#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,ans;
int f(int k){
	if (k==0){
		return 1;
	}
	return f(k-1)*k;
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	ans=f(n);
	printf("%lld",ans);
	return 0;
}

