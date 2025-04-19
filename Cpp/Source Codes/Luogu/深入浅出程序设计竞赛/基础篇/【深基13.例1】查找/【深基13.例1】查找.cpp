#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,m,q;
int a[maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=m;i++){
		scanf("%lld",&q);
		int left=1,right=n,pos=-1;
		while (left<=right){
			int mid=(left+right)>>1;
			if (a[mid]==q){
				pos=mid;
				right=mid-1;
			}else if (a[mid]>q){
				right=mid-1;
			}else if (a[mid]<q){
				left=mid+1;
			}
		}
		printf("%lld ",pos);
	}
	return 0;
}

