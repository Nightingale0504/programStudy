#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,mmax,a[maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		mmax=max(mmax,a[i]);
	}
	int left=mmax,right=1e9,ans=0;
	while (left<=right){
		int mid=(left+right)>>1,cnt=1,sum=0;
		for (int i=0;i<n;i++){
			if (sum+a[i]>mid){
				cnt++;
				sum=a[i];
			}else{
				sum+=a[i];
			}
		}
		if(cnt<=m){
			ans=mid;
			right=mid-1;
		}else if (cnt>m){
			left=mid+1;
		}
	}
	printf("%lld",ans);
	return 0;
}

