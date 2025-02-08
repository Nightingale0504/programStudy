#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,k,a[maxN],mmax=INT_MIN,mmin=INT_MAX;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		mmax=max(mmax,a[i]);
		mmin=min(mmin,a[i]);
	}
	for (int i=0;i<n;i++){
		if (a[i]<k){
			a[i]=mmin;
		}else if (a[i]>k){
			a[i]=mmax;
		}
		printf("%lld ",a[i]);
	}
	return 0;
}

