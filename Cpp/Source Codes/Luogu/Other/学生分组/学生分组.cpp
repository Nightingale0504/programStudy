#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[55],l,r;
int sum,ans,lsum,rsum;
bool judge=true;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	scanf("%lld%lld",&l,&r);
	if (l*n>sum || sum>r*n){
		judge=false;
		goto print;
	}
	for (int i=0;i<n;i++){
		if (a[i]>r){
			rsum+=a[i]-r;
		}
		if (a[i]<l){
			lsum+=l-a[i];
		}
	}
	ans=max(lsum,rsum);
	print:
	printf("%lld",judge ? ans : -1);
	return 0;
}

