#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[10005],ans,sum;
signed main(){
	scanf("%lld",&n);
	a[1]=1;
	a[2]=2;
	for (int i=3;i<=n;i++){
		a[i]=2*a[i-1]+3*a[i-2];
	}
	for (int i=1;i<=n;i++){
		sum+=a[i];
	}
	ans=a[n];
	printf("%lld %lld",ans,sum);
	return 0;
}

