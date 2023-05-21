#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n,t;
bool isPrime(int x){
	if (x<2){
		return false;
	}
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%d",&n);
	while (n--){
		scanf("%d",&t);
		if (isPrime(t)){
			printf("%d ",t);
		}
	}
	return 0;
}

