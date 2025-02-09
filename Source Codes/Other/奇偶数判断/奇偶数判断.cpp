#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	if (n&1){
		printf("odd");
	}else{
		printf("even");
	}
	return 0;
}

