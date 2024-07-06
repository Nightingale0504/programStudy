#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	if (n&1){
		printf("odd");
	}else{
		printf("even");
	}
	return 0;
}

