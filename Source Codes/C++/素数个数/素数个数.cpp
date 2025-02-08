#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxN=1e8+5;
int n,m,cnt;
bool isPrime[maxN];
int prime[maxN],tmp;
signed main(){
	scanf("%lld%lld",&n,&m);
	isPrime[1]=1;
	for (int i=2;i<=n;i++){
		if (isPrime[i]==0){
			prime[++cnt]=i;
		}
		for (int j=1;j<=cnt && i*prime[j]<=n;j++){
			isPrime[i*prime[j]]=1;
			if (i%prime[j]==0){
				break;
			}
		}
	}
	printf("%lld",cnt);
	return 0;
}

