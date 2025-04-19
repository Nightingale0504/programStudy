#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,k,ans;
int a[1000005];
signed main(){
	scanf("%lld%lld",&n,&k);
	k--;
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	a[k]=-a[k];
	for (int i=0;i<n;i++){
		ans+=a[i];
	}
	printf("%lld",ans);
	return 0;
}

