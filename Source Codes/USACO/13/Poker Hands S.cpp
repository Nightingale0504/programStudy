#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a[10000005],ans;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	ans+=a[1];
	for (int i=2;i<=n;i++){
		if (a[i]>=a[i-1]){
			ans+=a[i]-a[i-1];
		}
	}
	printf("%lld",ans);
	return 0;
}
