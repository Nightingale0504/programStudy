#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define int long long
bool isPrime[100000010];
int Prime[6000010],cnt;
void GetPrime(int n){
	memset(isPrime,1,sizeof(isPrime));
	isPrime[1]=0;
	for (int i=2;i<=n;i++){
		if (isPrime[i]){
			Prime[++cnt]=i;
		}
		for (int j=1;j<=cnt && i*Prime[j]<=n;j++){
			isPrime[i*Prime[j]]=0;
			if(i%Prime[j]==0){
				break;
			}
		}
	}
}
int n,q;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&q);
	GetPrime(n);
	while (q--){
		int k;
		scanf("%lld",&k);
		printf("%lld\n",Prime[k]);
	}
	return 0;
}

