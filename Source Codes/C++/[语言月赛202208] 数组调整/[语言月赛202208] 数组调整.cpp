#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,k,ans;
int a[1000005];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&k);
	k--;
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	a[k]=-a[k];
	for (int i=0;i<n;i++){
		ans+=a[i];
	}
	printf("%lld",ans);
	return 0;
}

