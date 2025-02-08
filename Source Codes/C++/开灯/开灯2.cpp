#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i*i<=n;i++){
		printf("%lld ",i*i);
	}
	return 0;
}

