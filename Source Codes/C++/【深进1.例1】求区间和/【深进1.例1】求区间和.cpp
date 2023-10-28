#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,l,r;
int a[100005],sum;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&m);
	while (m--){
		sum=0;
		scanf("%lld%lld",&l,&r);
		for (int i=l;i<=r;i++){
			sum+=a[i];
		}
		printf("%lld\n",sum);
	}
	return 0;
}

