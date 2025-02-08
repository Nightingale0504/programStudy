#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,h,k; 
signed main(){
	scanf("%lld%lld%lld%lld",&a,&b,&h,&k);
	a+=k;
	b+=k;
	h+=k;
	int ans=a*b*h%988444333;
	printf("%lld",ans);
	return 0;
}

