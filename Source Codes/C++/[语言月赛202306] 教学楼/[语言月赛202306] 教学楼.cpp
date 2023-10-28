#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int n,a,b,c;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
	if (n<=3){
		if (a<b && a<c){
			printf("library");
		}else if (b<c){
			printf("comprehensive");
		}else{
			printf("art");
		}
	}else if (n>3 && n<=5){
		if (b<c){
			printf("comprehensive");
		}else{
			printf("art");
		}
	}else{
		printf("art");
	}
	return 0;
}

