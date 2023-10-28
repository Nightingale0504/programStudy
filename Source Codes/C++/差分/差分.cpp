#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,c[1005],a[1005];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		c[i]=a[i]-a[i-1];
		printf("%lld ",c[i]);
	}
	return 0;
}

