#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
char n;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%c",&n);
	if ((int)n&1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}

