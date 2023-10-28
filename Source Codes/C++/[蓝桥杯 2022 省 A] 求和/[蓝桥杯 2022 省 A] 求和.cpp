#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int t,n,a,s;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a);
		s+=t*a;
		t+=a;
	}
	printf("%lld",s);
	return 0;
}

