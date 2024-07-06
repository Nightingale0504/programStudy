#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int T,n;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&T);
	while (T--){
		scanf("%lld",&n);
		if (n==2 || n==3 || n==5){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}
	return 0;
}

