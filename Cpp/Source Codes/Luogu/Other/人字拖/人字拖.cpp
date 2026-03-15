#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,t,ans;
signed main(){
    scanf("%lld",&n);
	while (n--){
		scanf("%lld",&t);
		ans+=t;
	}
	printf("%lld",ans);
	return 0;
}
