#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int mod=722733748;
int k,a,q,ans=1;
signed main(){
	scanf("%lld%lld%lld",&k,&a,&q);
	while (k--){
		ans=ans*a%mod;
		a=a*q%mod;
	}
	printf("%lld",ans);
	return 0;
}

