#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
#define int long long
const int maxN=2e5+5;
int n,c,num[maxN],ans;
map<int,int> mmap;
signed main(){
	scanf("%lld%lld",&n,&c);
	for (int i=0;i<n;i++){
		scanf("%lld",&num[i]);
		mmap[num[i]]++;
	}
	for (int i=0;i<n;i++){
		ans+=mmap[num[i]+c];
	}
	printf("%lld",ans);
	return 0;
}

