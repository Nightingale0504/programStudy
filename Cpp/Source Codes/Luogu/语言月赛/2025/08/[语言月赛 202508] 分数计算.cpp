#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,ansSu[maxN],ansSt[maxN],score[maxN];
int ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&ansSu[i]);
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&ansSt[i]);
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&score[i]);
    }
    for (int i=1;i<=n;i++){
        ans+=max((int)0,score[i]-abs(ansSu[i]-ansSt[i]));
    }
    printf("%lld",ans);
    return 0;
}