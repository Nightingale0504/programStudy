#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,n,ans;
signed main(){
	scanf("%lld%lld",&a,&b);
	n=a%b;
	ans=a/b;
	for (int i=n;i<b;i++){
		printf("%lld ",ans);
	}
	ans++;
	for (int i=0;i<n;i++){
		printf("%lld ",ans);
	}
	return 0;
}

