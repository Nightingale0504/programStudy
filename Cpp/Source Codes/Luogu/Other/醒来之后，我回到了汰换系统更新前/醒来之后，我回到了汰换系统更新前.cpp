#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=105;
int n,m,v[maxN],w[maxN][maxN],sum[maxN];
int ans;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%lld",&v[i]);
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            scanf("%lld",&w[i][j]);
        }
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            if (w[i][j]>v[j]){
                sum[j]=max(sum[j],w[i][j]-v[j]);
            }
        }
    }
    for (int i=1;i<=n;i++){
        ans+=sum[i];
    }
    printf("%lld",ans);
    return 0;
}