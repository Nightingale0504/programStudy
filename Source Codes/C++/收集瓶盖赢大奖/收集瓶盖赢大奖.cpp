#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int lucky,encourage;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&lucky,&encourage);
	if (lucky>=10 || encourage>=20){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}

