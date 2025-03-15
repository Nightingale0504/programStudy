#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
const int mod=998244353;
int a,b,k,ans=1;
signed main(){
	scanf("%lld%lld%lld",&a,&b,&k);
	for (int i=1;i<=k;i++){
		if (i%a==0){
			ans=ans*2%mod;
		}else if (i%b==0){
			ans=ceil(ans/2%mod);
		}else if (i%a==0 && i%b==0){
			continue;
		}
	}
	printf("%lld",ans);
	return 0;
}

