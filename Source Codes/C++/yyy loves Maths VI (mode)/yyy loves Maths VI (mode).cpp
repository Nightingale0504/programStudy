#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
#define int long long
int n,tmp,ans;
map<int,int> mmap;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&tmp);
		mmap[tmp]++;
		if (mmap[tmp]>=n/2){
			ans=tmp;
		}
	}
	printf("%lld",ans);
	return 0;
}

