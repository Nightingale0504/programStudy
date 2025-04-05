#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,T;
int a[10005][10005];
int k,x[1000005],y[1000005];
int a1,a2,b1,b2;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	scanf("%lld",&T);
	while (T--){
		scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
		swap(a[a1][b1],a[a2][b2]);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if ((j==1 && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1]) || (i==1 && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]) || (i==1 && j==1 && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1]) || (a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1])){
				x[++k]=i;
				y[k]=j;
			}
		}
	}
	printf("%lld\n",k);
	for (int i=1;i<=k;i++){
		printf("%lld %lld\n",x[i],y[i]);
	}
	return 0;
}

