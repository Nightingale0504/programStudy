#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,ans;
int a[maxN][maxN];
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            a[i][j]=INT_MAX;
        }
    }
    while (m--){
        int u,v,w;
        scanf("%lld%lld%lld",&u,&v,&w);
        a[u][v]=min(a[u][v],w);
    }
    for (int k=1;k<=n;k++){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
    for (int i=2;i<=n;i++){
        ans+=a[1][i];
        ans+=a[i][1];
    }
    printf("%lld",ans);
	return 0;
}