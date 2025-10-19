#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=105;
int n,a[maxN],ans,cnt;
signed main(){
    freopen("cookie.in","r",stdin);
    freopen("cookie.out","w",stdout);
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        cnt+=a[i];
    }
    for (int i=1;i<=n;i++){
        cnt-=a[i];
        if (cnt%2==0){
            ans++;
        }
        cnt+=a[i];
    }
    printf("%lld",ans);
    return 0;
}