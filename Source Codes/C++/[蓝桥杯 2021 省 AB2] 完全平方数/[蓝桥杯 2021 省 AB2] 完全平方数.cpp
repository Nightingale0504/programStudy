#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,num,ans=1;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=2;i*i<=n;i++){
		num=0;
		while (n%i==0){
			num++;
			n/=i;
		}
		if (num&1){
			ans*=i;
		}
	}
	ans*=n;
	printf("%lld",ans);
	return 0;
}

