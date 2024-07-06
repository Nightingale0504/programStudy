#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
char a,b,c; 
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%c%c%c",&a,&b,&c);
	printf("%c%c%c",c,b,a);
	return 0;
}

