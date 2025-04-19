#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
int a=8,b,c;
signed main(){
	scanf("%lld",&n);
	b=12*(n-2);
	c=6*pow((n-2),2);
	printf("%lld %lld %lld",a,b,c);
	return 0;
}

