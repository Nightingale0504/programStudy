#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=2005;
const int INF=0x3f3f3f3f;
int n,m,ans=INF;
int a[maxN][maxN],f[maxN][maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            scanf("%lld",&a[j][i]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            f[i][j]=min(f[i-1][j],j==1 ? f[i-1][m] : f[i-1][j-1])+a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
        ans=min(ans,f[n][i]);
    printf("%lld", ans);
	return 0;
}

