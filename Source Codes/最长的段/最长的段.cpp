#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int n,a[100010],t,mmax=INT_MIN;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	while (n--){
		scanf("%lld",&t);
		a[t]++;
	}
	for (int i=1;i<=100000;i++){
		mmax=max(mmax,a[i]);
	}
	printf("%lld",mmax);
	return 0;
}

