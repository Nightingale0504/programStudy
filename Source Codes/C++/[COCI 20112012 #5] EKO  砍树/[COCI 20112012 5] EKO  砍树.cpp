#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,m,mmax,ans;
int a[maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	mmax=a[n-1];
	int left=0,right=mmax,ans=0,t=0;
	while (left<=right){
		t=0;
		int mid=left+right>>1;
		for (int i=0;i<n;i++){
			if ( a[i]-mid >0){
				t+=a[i]-mid;
			}
		}
		if (t==m){
			ans=mid;
			break;
		}else if (t>m){
			ans=mid;
			left=mid+1;
		}else if (t<m){
			right=mid-1;
		}
	}
	printf("%lld",ans);
	return 0;
}

