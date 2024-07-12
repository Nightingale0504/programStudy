#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,t;
signed main(){
	scanf("%lld",&n);
	while (n--){
		scanf("%lld",&t);
		if (t&1){
			printf("zs wins\n");
		}else{
			printf("pb wins\n");
		}
	}
	return 0;
}

