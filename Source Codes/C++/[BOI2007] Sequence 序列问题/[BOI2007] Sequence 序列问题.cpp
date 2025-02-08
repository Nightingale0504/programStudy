#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,a[maxN],sum;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=2;i<=n;i++){
		sum+=max(a[i],a[i-1]);
	}
	printf("%lld",sum);
	return 0;
}

