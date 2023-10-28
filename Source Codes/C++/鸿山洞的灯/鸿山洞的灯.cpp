#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,dist,a[maxN],sum;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&dist);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	for (int i=1;i<n;i++){
		if (a[i+1]-a[i-1]<=dist){
			a[i]=a[i-1];
			sum++;
		}
	}
	sum--;
	printf("%lld",sum);
	return 0;
}

