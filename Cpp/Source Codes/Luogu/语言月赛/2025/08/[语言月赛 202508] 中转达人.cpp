#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=105;
int n,q;
int economy[maxN][maxN],transfer[maxN][maxN];
signed main(){
    scanf("%lld%lld",&n,&q);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%lld",&economy[i][j]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%lld",&transfer[i][j]);
        }
    }
    while (q--){
        int u,v;
        scanf("%lld",&u,&v);
        
    }
    return 0;
}