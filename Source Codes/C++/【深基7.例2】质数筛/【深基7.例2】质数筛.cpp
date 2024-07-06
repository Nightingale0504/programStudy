#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxI=100000;
const int maxN=maxI+5;
int f[maxN],n,m;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	f[1]=1;
	for (int i=2;i<=maxI;i++){
		if (f[i]==0){
			for (int j=i*i;j<=maxI;j+=i){
				f[j]=1;
			}
		}
	}
	scanf("%lld",&n);
	while (n--){
		scanf("%lld",&m);
		if (f[m]==0){
			printf ("%lld ",m);
		}
	}
	return 0;
}

