#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int m,n,a[1005];
signed main(){
	scanf("%lld%lld",&m,&n);
	for (int i=1;i<=n;i++){
		a[i]=1;
	}
	for (int i=2;i<=m;i++){
		for (int j=2;j<=n;j++){
			a[j]=a[j]+a[i-1];
		}
	}
	int ans=a[n];
	printf("%lld",ans);
	return 0;
}

