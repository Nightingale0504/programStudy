#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,c;
signed main(){
	scanf("%lld%lld",&a,&b);
	a/=10;
	b*=10;
	c=10000-a-b;
	printf ("%lld %lld %lld",a,b,c);
	return 0;
}

