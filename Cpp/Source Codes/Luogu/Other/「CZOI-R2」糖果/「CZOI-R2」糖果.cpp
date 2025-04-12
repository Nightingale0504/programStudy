#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,k,a[maxN],mmax=INT_MIN,ans;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		mmax=max(mmax,a[i]);
	}
	for (int i=0;i<n;i++){
		if ((mmax-a[i])%k!=0){
			printf("NO");
			return 0;
		}
		ans+=(mmax-a[i])/k;
	}
	printf("YES %lld",ans);
	return 0;
}

