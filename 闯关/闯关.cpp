#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		if (n%i==0){
			m+=i;
		}
	}
	printf("%lld",m);
	return 0;
}

