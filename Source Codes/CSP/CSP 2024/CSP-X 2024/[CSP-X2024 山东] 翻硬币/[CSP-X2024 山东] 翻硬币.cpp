#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=2e5+5;
int n,m,a[maxN]; 
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		int l,r;
		scanf("%lld%lld",&l,&r);
		a[l]++;
		a[r+1]--;
	}
	for (int i=1;i<=n;i++){
		a[i]+=a[i-1];
		if (a[i]%2==0){
			printf("0");
		}else{
			printf("1");
		}
	}
	return 0;
}

