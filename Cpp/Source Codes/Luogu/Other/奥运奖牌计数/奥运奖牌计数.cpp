#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,t1,t2,t3,a,b,c,ans;
signed main(){
	scanf("%lld",&n);
	while (n--){
		scanf("%lld%lld%lld",&t1,&t2,&t3);
		a+=t1;
		b+=t2;
		c+=t3;
		ans+=(t1+t2+t3);
	}
	printf("%lld %lld %lld %lld",a,b,c,ans);
	return 0;
}

