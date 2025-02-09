#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int sum[1005],n,k;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&k);
		sum[i]=sum[i-1]+k;
	}
	scanf("%lld",&k);
	printf("%lld",sum[k]);
	return 0;
}

