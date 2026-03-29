#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,xM,yM,ans1,ans2;
int a[maxN][maxN],cnt[maxN];
signed main(){
    scanf("%lld%lld%lld%lld",&n,&m,&xM,&yM);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
            cnt[i]+=a[i][j];
        }
    }
    ans1=1;
    for (int i=n;i>=1;i--){
        ans2+=cnt[i];
        if (i==xM){
            break;
        }
        ans1+=cnt[i];

    }
    printf("%lld %lld",ans1,ans2);
    return 0;
}