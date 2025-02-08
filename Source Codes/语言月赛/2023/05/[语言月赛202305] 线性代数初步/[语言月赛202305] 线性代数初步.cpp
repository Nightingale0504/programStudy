#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,c,d;
int ans;
signed main(){
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	ans=a*d-b*c;
	printf("%lld",ans);
	return 0;
}

