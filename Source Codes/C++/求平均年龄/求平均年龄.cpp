#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,t;
double ans;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&t);
		ans+=t;
	}
	ans/=n;
	printf("%.2lf",ans);
	return 0;
}

