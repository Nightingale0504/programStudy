#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define int long long
int n;
bool judgePrime(int x){
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
signed main(){
	scanf("%lld",&n);
	(!judgePrime(n) && n%10==n/10000 && n/10%10==n/1000%10) ? printf("yes") : printf("no");
	return 0;
}

