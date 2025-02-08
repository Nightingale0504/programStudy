#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,ans;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		ans+=i;
		printf("%lld\n",ans);
	}
	return 0;
}

