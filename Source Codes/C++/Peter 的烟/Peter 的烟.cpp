#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,k,ans;
signed main(){
	scanf("%lld%lld",&n,&k);
	ans=n+(n-1)/(k-1);
	printf("%lld",ans);
	return 0;
}

