#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[45];
signed main(){
	scanf("%lld",&n);
	a[1]=1;
	a[2]=2;
	for (int i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%lld",a[n]);
	return 0;
}

