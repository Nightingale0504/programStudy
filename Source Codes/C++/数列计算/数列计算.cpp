#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,ans;
int num=3,sum=2;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=0;i<n;i++,sum+=2){
		ans+=num;
		printf("%lld\n",num);
		num+=sum;
	}
	printf("%lld",ans);
	return 0;
}

