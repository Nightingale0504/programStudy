#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
signed main(){
	scanf("%lld",&n);
	n==1 ? ans=0 : ans=n-2;
	printf("%lld",ans);
	return 0;
}

