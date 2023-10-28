#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,x;
double ans;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&x,&n);
	ans=x;
	while (n--){
		ans+=ans*0.1/100;
	}
	printf("%.4lf",ans);
	return 0;
}

