#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=2e5+5;
int n,q;
int r[maxN],sum[maxN];
signed main(){
	scanf("%lld%lld",&n,&q);
	for (int i=1;i<=n;i++){
		scanf("%lld",&r[i]);
	}
	sort(r+1,r+n+1);
	for (int i=1;i<=n;i++){
		sum[i]=sum[i-1]+r[i];
	}
	while (q--){
		int x;
		scanf("%lld",&x);
		int left=0,right=n,ans=0;
		while (left<=right){
			int mid=(left+right)>>1;
			if (sum[mid]<=x){
				ans=mid;
				left=mid+1;
			}else{
				right=mid-1;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}

