#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	// method 1
	printf("Method 1:����ö��\n");
	for (int i=1;i<=1e5;i++){
		if (i*i*i<=n && (i+1)*(i+1)*(i+1)>n){
			printf("%lld\n",i);
		}
	}
	// method 2
	printf("Method 2:����\n");
	int left=1,right=1e5,ans;
	while (left<=right){
		int mid=(left+right)>>1;
		if (mid*mid*mid<=n){
			ans=mid;
			left=mid+1;
		}else if (mid*mid*mid>n){
			right=mid-1;
		}
	}
	printf("%lld\n",ans);
	// method 3
	printf("Method 3:cbrt����\n");
	printf("%.0f",cbrt(n));
	return 0;
}

