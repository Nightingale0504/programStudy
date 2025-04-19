#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
int f(int x){
	int k=x;
	while (x>=3){
		k+=x/3;
		x=x/3+x%3;
	}
	return k;
}
signed main(){
	scanf("%lld",&n);
	int left=1,right=1e8,ans;
	while (left<=right){
		int mid=(left+right)>>1;
		int m=f(mid);
		if (m>=n){
			ans=mid;
			right=mid-1;
		}else if (m<n){
			left=mid+1;
		}
	}
	printf("%lld",ans);
	return 0;
}

