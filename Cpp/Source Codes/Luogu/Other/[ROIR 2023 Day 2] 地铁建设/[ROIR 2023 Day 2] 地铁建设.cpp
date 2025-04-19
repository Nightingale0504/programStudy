#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=105;
int n,p,z[maxN],a[maxN],b[maxN];
signed main(){
	scanf("%lld%lld",&n,&p);
	for (int i=0;i<n;i++){
		scanf("%lld%lld%lld",&z[i],&a[i],&b[i]);
	}
	int left=1,right=1e12,ans=0;
	while (left<=right){
		int mid=(left+right)>>1,tp=0;
		for (int i=0;i<n;i++){
			if (mid<=z[i]){
				tp+=mid*a[i];
			}else{
				tp+=a[i]*z[i]+b[i]*(mid-z[i]);
			}
		}
		if (tp>=p){
			ans=mid;
			right=mid-1;
		}else if (tp<p){
			left=mid+1;
		}
	}
	printf("%lld",ans);
	return 0;
}

