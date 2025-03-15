#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,ans;
signed main(){
	scanf("%lld",&n);
	while (n--){
		int t;
		scanf("%lld",&t);
		ans=max(ans,t);
	}
	printf("%lld",ans);
	return 0;
}

