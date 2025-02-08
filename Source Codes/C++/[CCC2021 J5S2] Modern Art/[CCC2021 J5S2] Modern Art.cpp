#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=5e6+5;
char opt;
int n,m,k,a,ans;
int r[maxN],c[maxN];
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	while (k--){
		cin>>opt>>a;
		if (opt=='R'){
			r[a]=!r[a];
		}else{
			c[a]=!c[a];
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			ans+=(r[i]+c[j])%2;
		}
	}
	printf("%lld\n",ans);
	return 0;
}
