#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	long long a,b;
	scanf("%lld",&a);
	scanf("%lld",&b);
	printf("%lld",a+b); 
	return 0;
}

