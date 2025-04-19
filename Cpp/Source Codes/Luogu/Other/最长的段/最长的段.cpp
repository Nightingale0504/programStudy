#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[100010],b[100010],mmax=INT_MIN,sum,t;
signed main(){
	// Solution: Standard
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		sum=1;
		for (int j=1;j<i;j++){
			if (a[i]==a[j]){
				sum++;
			}
		}
		mmax=max(mmax,sum);
	}
	printf("%lld",mmax);
	
	// Solution: Bucket
	scanf("%lld",&n);
	while (n--){
		scanf("%lld",&t);
		b[t]++;
	}
	for (int i=1;i<=100000;i++){
		mmax=max(mmax,b[i]);
	}
	printf("%lld",mmax);
	
	// Solution: Dynamic programming [DP]
	return 0;
}

