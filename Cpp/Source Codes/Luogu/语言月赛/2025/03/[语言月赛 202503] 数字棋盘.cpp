#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,x,y;
int a[maxN][maxN];
int ans;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	scanf("%lld%lld",&x,&y);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if ((a[i][j]==x) && ((i-1>=1 && a[i-1][j]==y) || (i+1<=n && a[i+1][j]==y) || (j-1>=1 && a[i][j-1]==y) || (j+1<=m && a[i][j+1]==y))){
				ans++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

