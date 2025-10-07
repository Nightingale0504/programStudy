#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	int n;
	long long ans;
	ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]); 
		a[i]+=a[i-1]; 
	}
	for(int i=1;i<=n-1;i++){  
		ans=max(ans,__gcd(a[i],a[n]-a[i]));
	}
	printf("%lld\n",ans);
	return 0;
}
