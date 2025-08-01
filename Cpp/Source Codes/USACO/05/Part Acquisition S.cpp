#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,k;
int a[maxN][maxN];
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=k;i++){
        for (int j=1;j<=k;j++){
            a[i][j]=INT_MAX;
        }
    }
    for (int i=1;i<=n;i++){
        int p,q;
        scanf("%lld%lld",&p,&q);
        a[p][q]=1;
    }
    for (int u=1;u<=k;u++){
        for (int i=1;i<=k;i++){
            for (int j=1;j<=k;j++){
                a[i][j]=min(a[i][j],a[i][u]+a[u][j]);
            }
        }
    }
    if (a[1][k]!=INT_MAX){
        printf("%lld",a[1][k]+1);
    }else{
        printf("-1");
    }
	return 0;
}