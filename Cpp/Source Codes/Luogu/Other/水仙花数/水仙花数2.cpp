#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,c,k;
signed main(){
	scanf("%1lld%1lld%1lld",&a,&b,&c);
	k=100*a+10*b+c;
	(pow(a,3)+pow(b,3)+pow(c,3)==k) ? printf("YES") : printf("NO");
	return 0;
}

