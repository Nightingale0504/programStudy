#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=505;
int n,m,ans;
int in[maxN];
signed main(){
    scanf("%lld%lld",&n,&m);
    while (m--){
        int u,v;
        scanf("%lld%lld",&u,&v);
        in[v]++;
    }
    for (int i=1;i<=n;i++){
        if (in[i]==0){
            ans++;
        }
    }
    printf("%lld\n",ans);
    for (int i=1;i<=n;i++){
        if (in[i]==0){
            printf("%lld ",i);
        }
    }
    return 0;
}