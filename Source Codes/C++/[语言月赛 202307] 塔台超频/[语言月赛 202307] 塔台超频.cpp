#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,mVoltage,tmp;
struct tower{
	int pos,cr;
}t[maxN];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&t[i].pos,&t[i].cr);
	}
	for (int i=1;i<=n-1;i++){
		tmp=t[i+1].pos-t[i].pos;
		if (t[i].cr>=tmp){
			continue;
		}
		mVoltage=max(mVoltage,tmp-t[i].cr);
	}
	printf("%lld",mVoltage);
	return 0;
}
