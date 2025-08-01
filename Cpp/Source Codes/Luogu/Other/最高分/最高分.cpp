#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[10005];
signed main(){

	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	printf("%lld",a[n-1]);
	return 0;
}

