#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxM=3e5+5;
int n,m;
int a[maxM];
signed main(){
	int left=1,right=0,ans=0;
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<m;i++){
		scanf("%lld",&a[i]);
		right+=a[i];
	}
	while (left<=right){
		int mid=(left+right)>>1,sum=0;
		for (int i=0;i<m;i++){
			sum+=a[i]/mid;
			if (a[i]%mid!=0){
				sum++;
			}
		}
		if (sum<=n){
			ans=mid;
			right=mid-1;
		}else if (sum>n){
			left=mid+1;
		}
	}
	printf("%lld",ans);
	return 0;
}

