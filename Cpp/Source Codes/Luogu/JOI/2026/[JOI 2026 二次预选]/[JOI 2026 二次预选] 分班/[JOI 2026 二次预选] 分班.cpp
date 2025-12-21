#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,a[maxN],ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    ans=a[n-n/2];
    printf("%lld",ans);
    return 0;
}