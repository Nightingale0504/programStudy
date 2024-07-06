#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,k,cnt,tmp=1;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		tmp*=n;
	}
	for (int i=n;i<=tmp;i+=10){
		if (i%10==n && (i%k)%n==0){
			cnt++;
		}
	}
	printf("%lld",cnt);
	return 0;
}

