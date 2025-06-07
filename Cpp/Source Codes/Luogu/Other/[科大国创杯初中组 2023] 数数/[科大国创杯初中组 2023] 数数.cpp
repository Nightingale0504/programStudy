#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=8e3+5;
int n,a[maxN],ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            int k=lower_bound(a+j+1,a+n+1,a[i]+a[j])-a;
            ans+=k-j-1;
        }
    }
    printf("%lld",ans);
    return 0;
}