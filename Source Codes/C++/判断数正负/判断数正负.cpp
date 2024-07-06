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
	if (n>0){
		printf("positive");
	}else if (n==0){
		printf("zero");
	}else{
		printf("negative");
	}
	return 0;
}

