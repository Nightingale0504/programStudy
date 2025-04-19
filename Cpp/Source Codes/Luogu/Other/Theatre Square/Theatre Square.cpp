#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,a,ans;
signed main(){
	scanf("%lld%lld%lld",&n,&m,&a);
	ans=ceil(double(n)/double(a))*ceil(double(m)/double(a));
	printf("%lld",ans);
	return 0;
}

