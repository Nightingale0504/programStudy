#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a[25][25];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			if (i==1 || i==j){
				a[i][j]=1;
			}else{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

