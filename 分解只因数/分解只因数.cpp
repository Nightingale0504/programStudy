#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,t;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%lld",&t);
	while (t--){
		scanf("%lld",&n);
		if (n%2==0){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}
	return 0;
}

