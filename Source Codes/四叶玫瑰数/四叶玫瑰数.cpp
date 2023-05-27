#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define int long long
int n,m,t,sum;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&m);
	for (int i=n;i<=m;i++){
		t=i,sum=0;
		while (t!=0){
			sum+=pow(t%10,4);
			t/=10;
		}
		if (sum==i){
			printf("%lld",sum);
		}
	}
	return 0;
}

