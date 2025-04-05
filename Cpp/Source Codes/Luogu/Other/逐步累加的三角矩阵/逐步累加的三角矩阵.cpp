#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a[105][105];
signed main(){
	scanf("%lld",&n);
	a[1][1]=1;
	for (int i=2;i<=n;i++){
		a[1][i]=a[1][i-1]+i;
	}
	for (int i=2;i<=n;i++){
		for (int j=1;j<=n;j++){
			a[i][j]=a[i-1][j+1]-1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n+1-i;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

