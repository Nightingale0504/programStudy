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
	if (n%3==0 && n%5==0){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}

