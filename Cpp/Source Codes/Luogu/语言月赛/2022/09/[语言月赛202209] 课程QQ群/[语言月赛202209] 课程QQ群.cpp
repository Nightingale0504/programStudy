#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,k,t;
int ans;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&t);
		if (t==k){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

