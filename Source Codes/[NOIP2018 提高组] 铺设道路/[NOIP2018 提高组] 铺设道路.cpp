#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define maxN 1000005
int n,d[maxN],f[maxN];
int ans;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&d[i]);
	}
	f[1]=d[1];
	for (int i=2;i<=n;i++){
		if (d[i]<=d[i-1]){
			f[i]=f[i-1];
		}else{
			f[i]=f[i-1]+(d[i]-d[i-1]);
		}
	}
	ans=f[n];
	printf("%lld",ans);
	return 0;
}

