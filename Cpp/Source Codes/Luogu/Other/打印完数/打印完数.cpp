#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m;
int a[10005];
signed main(){

	scanf("%lld%lld",&n,&m);
	for (int i=n;i<=m;i++){
		int sum=0;
		for (int j=1;j<i;j++){
			if (i%j==0){
				sum+=j;
			}
		}
		if (sum){
			printf("%lld ",sum);
		}
	}
	return 0;
}

