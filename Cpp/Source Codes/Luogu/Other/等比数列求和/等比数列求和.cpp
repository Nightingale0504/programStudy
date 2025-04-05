#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a[105],k,sum;
signed main(){
	scanf("%lld%lld%lld",&n,&a[0],&a[1]);
	k=a[1]/a[0];
	for (int i=2;i<=n;i++){
		a[i]=k*a[i-1];
	}
	for (int i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%lld",sum);
	return 0;
}

