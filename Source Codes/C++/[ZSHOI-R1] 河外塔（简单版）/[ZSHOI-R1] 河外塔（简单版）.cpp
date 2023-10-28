#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,id[1305];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&id[i]);
	}
	return 0;
}

