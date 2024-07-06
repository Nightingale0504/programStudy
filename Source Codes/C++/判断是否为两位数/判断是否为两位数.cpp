#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&a);
	if (a>=10 && a<=99){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}

