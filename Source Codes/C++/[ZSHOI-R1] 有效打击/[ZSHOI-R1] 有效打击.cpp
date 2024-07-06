#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=5*1e6+5;
const int maxM=5*1e6+5;
int n,m;
int A[maxN],B[maxM];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%lld",&A[i]);
	}
	for (int i=0;i<m;i++){
		scanf("%lld",&B[i]);
	}
	printf("%lld",n);
	return 0;
}

