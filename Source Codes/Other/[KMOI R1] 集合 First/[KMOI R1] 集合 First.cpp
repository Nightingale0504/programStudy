#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int mod=911451407;
int n,ans,a=2;
signed main(){
	scanf("%lld",&n);
	ans=n%mod;
	n--;
	while (n){
		if (n&1){
			ans=ans*a%mod;
			n--;
		}
		n>>=1;
		a=a*a%mod;
	}
	printf("%lld",ans);
	return 0;
}

