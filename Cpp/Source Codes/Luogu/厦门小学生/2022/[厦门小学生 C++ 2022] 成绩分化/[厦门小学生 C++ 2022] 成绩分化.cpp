#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
int mmax=INT_MIN,mmin=INT_MAX;
signed main(){
	scanf("%lld",&n);
	while (n--){
		int x;
		scanf("%lld",&x);
		mmax=max(x,mmax);
		mmin=min(x,mmin);
	}
	ans=mmax-mmin;
	printf("%lld",ans);
	return 0;
}

