#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define maxN 100005
int n,m,sum;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&m);
	sum=m;
	while (--n){
		scanf("%lld",&m);
		sum+=abs(m);
	}
	printf("%lld",sum);
	return 0;
}

