#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x,y;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&x,&y);
	if (x>y){
		printf(">");
	}else if (x==y){
		printf("=");
	}else{
		printf("<");
	}
	return 0;
}

