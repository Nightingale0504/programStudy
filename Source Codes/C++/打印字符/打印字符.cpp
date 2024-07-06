#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x;
char c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&x);
	c=(char)x;
	printf("%c",c);
	return 0;
}

