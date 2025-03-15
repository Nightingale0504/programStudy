#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=5e3+5;
int n,k,m,sum;
int a[maxN],b[maxN],c[maxN];
signed main(){
	scanf("%lld%lld%lld",&n,&k,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&b[i]);
		c[i]=a[i]-b[i];
	}
	for (int i=1;i<=k;i++){
		sum+=c[i];
	}
	if (sum>=m){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}

