#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,n,t,ans;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld%lld",&a,&b,&n);
	t=b-a;
	ans=a+(n-1)*t;
	printf("%lld",ans);
	return 0;
}

