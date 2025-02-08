#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n;
bool prime[maxN];
signed main(){
	scanf("%lld",&n);
	prime[0]=prime[1]=1;
	for (int i=2;i*i<=n+1;i++){
		if (prime[i]==0){
			for (int j=i*2;j<=n+1;j+=i){
				prime[j]=1;
			}
		}
	}
	if (n<3){
		printf("1\n");
	}else{
		printf("2\n");
	}
	for (int i=2;i<=n+1;i++){
		printf("%lld ",prime[i]+1);
	}
	return 0;
}

