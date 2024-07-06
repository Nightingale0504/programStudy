#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,ans,a[maxN];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (register int i=1;i<=n;i++){
		ans+=n/i;
	}
	printf("%lld",ans);
	return 0;
}

