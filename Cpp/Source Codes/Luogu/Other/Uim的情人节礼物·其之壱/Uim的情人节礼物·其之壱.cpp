#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[15];
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	if (prev_permutation(a,a+n)){
		for (int i=0;i<n;i++){
			printf("%lld ",a[i]);
		}
		exit(0);
	}
	printf("ERROR");
	return 0;
}

