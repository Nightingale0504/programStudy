#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int a,x;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&a);
	if (a==0){
		x=0;
	}else{
		x=ceil((a/10.0)*(a/10.0));
	}
	printf("%lld",x);
	return 0;
}

