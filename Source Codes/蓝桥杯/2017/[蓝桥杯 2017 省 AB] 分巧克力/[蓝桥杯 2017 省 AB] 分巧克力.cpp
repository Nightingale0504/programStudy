#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,k;
int h[maxN],w[maxN];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&h[i],&w[i]);
	}
	int left=1,right=1e5,ans=0;
	while (left<=right){
		int mid=(left+right)>>1,s=0;
		for (int i=0;i<n;i++){
			s+=(h[i]/mid)*(w[i]/mid);
		}
		if (s>=k){
			ans=mid;
			left=mid+1;
		}else if (s<k){
			right=mid-1;
		}
	}
	printf("%lld",ans);
	return 0;
}

