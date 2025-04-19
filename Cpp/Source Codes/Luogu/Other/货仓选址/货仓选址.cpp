#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,a[maxN],k;
int ans;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	k=n/2;
	for (int i=0;i<n;i++){
		ans+=abs(a[i]-a[k]);
	}
	printf("%lld",ans);
	return 0;
}

