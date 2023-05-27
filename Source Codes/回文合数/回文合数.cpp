#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
bool f(int x){
	for (int i=2;i*i<=x;i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	(!f(n) && n%10==n/10000 && n/10%10==n/1000%10) ? printf("yes") : printf("no");
	return 0;
}

