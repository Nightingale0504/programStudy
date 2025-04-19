#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
signed main(){
	scanf("%lld",&n);
	ans=n+n/2;
	printf("%lld\n",ans);
	for (int i=2;i<=n;i+=2){
		printf("%lld ",i);
	}
	for (int i=1;i<=n;i+=2){
		printf("%lld ",i);
	}
	for (int i=2;i<=n;i+=2){
		printf("%lld ",i);
	}
	return 0;
}

