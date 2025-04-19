#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=15;
int n,a[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	while (n--){
		for (int i=0;i<n;i++){
			a[i]=a[i]+a[i+1];
			printf("%lld ",a[i]);
		}
		printf("\n");
	}
	return 0;
}

