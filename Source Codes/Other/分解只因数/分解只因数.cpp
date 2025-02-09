#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,t;
signed main(){
	scanf("%lld",&t);
	while (t--){
		scanf("%lld",&n);
		if (n%2==0){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}
	return 0;
}

