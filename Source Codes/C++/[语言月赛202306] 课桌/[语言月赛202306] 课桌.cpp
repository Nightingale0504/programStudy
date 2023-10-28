#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,x,t,ans;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&x);
	for (int i=0;i<n;i++){
		t=0;
		scanf("%lld",&t);
		t+=x;
		ans+=t;
	}
	printf("%lld",ans);
	return 0;
}

