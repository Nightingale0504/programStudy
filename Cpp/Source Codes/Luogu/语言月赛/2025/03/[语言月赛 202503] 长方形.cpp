#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,s; 
signed main(){
	scanf("%lld%lld",&a,&s);
	printf("%lld",2*(a+(s/a)));
	return 0;
}

