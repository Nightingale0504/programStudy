#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=5e6+5;
int n,p,ans=INT_MAX,a[maxN],b[maxN];
signed main(){
    scanf("%lld%lld",&n,&p);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for (int i=1;i<=n;i++){
        b[i]=a[i]-a[i-1];
    }
    while (p--){
        int x,y,z;
        scanf("%lld%lld%lld",&x,&y,&z);
        b[x]+=z;
        b[y+1]-=z;
    }
    for (int i=1;i<=n;i++){
        a[i]=a[i-1]+b[i];
        ans=min(ans,a[i]);
    }
    printf("%lld",ans);
    return 0;
}