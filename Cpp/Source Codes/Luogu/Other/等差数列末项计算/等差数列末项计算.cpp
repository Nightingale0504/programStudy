#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,n,t,ans;
signed main(){
	scanf("%lld%lld%lld",&a,&b,&n);
	t=b-a;
	ans=a+(n-1)*t;
	printf("%lld",ans);
	return 0;
}

