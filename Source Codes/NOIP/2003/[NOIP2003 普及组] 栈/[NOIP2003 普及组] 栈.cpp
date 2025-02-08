#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
int a[1005];
signed main(){
	scanf("%lld",&n);
	a[0]=a[1]=1;
	for (int i=2;i<=n;i++){
		for (int j=0;j<i;j++){
			a[i]+=a[j]*a[i-j-1];
		}
	}
	printf("%lld",a[n]);
	return 0;
}

