#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,mmax=-1;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&m);
		mmax=max(m,mmax);
	}
	printf("%lld",mmax);
	return 0;
}

