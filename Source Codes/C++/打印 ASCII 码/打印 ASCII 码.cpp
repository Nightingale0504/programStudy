#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
char c;
int x;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%c",&c);
	x=(int)c;
	printf("%lld",x);
	return 0;
}

