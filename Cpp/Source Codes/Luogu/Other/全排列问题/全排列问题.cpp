#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[15];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		a[i]=i;
	}
	do{
		for (int i=1;i<=n;i++){
			printf("%5lld",a[i]);
		}
		puts("");
	}while (next_permutation(a+1,a+n+1));
	return 0;
}

