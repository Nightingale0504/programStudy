#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,k;
int l[maxN];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&l[i]);
	}
	int left=1,right=1e8,ans=0;
	while (left<=right){
		int mid=(left+right)>>1,total=0;
		for (int i=0;i<n;i++){
			total+=l[i]/mid;
		}
		if (total>=k){
			ans=mid;
			left=mid+1;
		}else if (total<k){ 
			right=mid-1;
		}
	}
	printf("%lld",ans);
	return 0;
}

