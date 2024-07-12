#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,c,ans; 
signed main(){
	scanf("%lld%lld%lld",&a,&b,&c);
	ans=max(max(a,b),c);
	printf("%lld",ans);
	return 0;
}

