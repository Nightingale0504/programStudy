#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e4+5;
int n,cnt,mmin=INT_MAX;
int prime[maxN],miu[maxN];
int j,k;
inline bool isMiu(int n){
	for (int m=2;m*m<=n;m++){
		if (n%(m*m)==0){
			return true;
		}
	}
	return false;
}
inline bool isPrime(int n){
	if (n<2){
		return false;
	}
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		if (isPrime(i)){
			prime[j++]=i;
		}
		if (isMiu(i)){
			miu[k++]=i;
		}
	}
	for (int i=0;i<j;i++){
		for (int l=0;l<k;l++){
			if (prime[i]+miu[l]==n){
				cnt++;
				mmin=min(mmin,abs(prime[i]-miu[l]));
			}
		}
	}
	printf("%lld\n%lld",cnt,mmin);
	return 0;
}

