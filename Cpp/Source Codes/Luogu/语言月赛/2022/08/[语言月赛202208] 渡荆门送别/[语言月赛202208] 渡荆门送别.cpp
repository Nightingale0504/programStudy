#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,tmp;
int a[1000005];
int mmax=LONG_LONG_MIN,mmin=LONG_LONG_MAX;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=0;i<n;i++){
		mmax=max(mmax,a[i]);
		mmin=min(mmin,a[i]);
	}
	for (int i=0;i<n;i++){
		tmp=mmax-a[i];
		printf("%lld ",tmp);
	}
	printf("\n");
	for (int i=0;i<n;i++){
		tmp=a[i]-mmin;
		printf("%lld ",tmp);
	}
	return 0;
}

