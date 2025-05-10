#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e4+5;
int n,ans,a[maxN],b[maxN];
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld%lld",&a[i],&b[i]);
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for (int i=1;i<=n;i++){
        ans+=b[i]-a[i];
        if (i+1<=n){
            if (b[i]>a[i+1]){
                ans-=b[i]-a[i+1];
            }
        }
    }
    printf("%lld",ans);
    return 0;
}