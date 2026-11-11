#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e5+5;
int n,l,r,ans,a[maxN];
char c[maxN];
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld %c",&a[i],&c[i]);
    }
    l=1;
    r=n;
    while (l<r){
        int m=min(a[l],a[r]);
        if (c[l]!=c[r]){
            ans+=m;
        }
        a[l]-=m;
        a[r]-=m;
        if (a[l]==0){
            l++;
        }
        if (a[r]==0){
            r--;
        }
    }
    printf("%lld\n",ans);
    return 0;
}