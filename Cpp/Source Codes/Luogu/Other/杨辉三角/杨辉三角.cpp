#include<bits/stdc++.h> 
using namespace std;
#define int long long
#define maxN 1005
int C[maxN][maxN];
int n,m;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<=n;i++){
		C[i][0]=C[i][i]=1;
		for (int j=1;j<i;j++){
			C[i][j]=C[i-1][j]+C[i-1][j-1];
		}
	}
	for (int i=0;i<=n;i++){
		for (int j=0;j<=i;j++){
			printf("%lld ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

