#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1005;
int n,k,ans;
int a[maxN];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	for (int i=1;i<=n;i++){
		int sum=0;
		for (int j=i;j>=1;j--){
			if (a[i]-a[j]<=k){
				sum+=a[j];
			}
		}
		ans=max(ans,sum);
	}
	printf("%lld",ans);
	return 0;
}

