#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=2e3+5;
int n,l,a[maxN],ans=-1;
signed main(){
    scanf("%lld%lld",&n,&l);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    printf("%lld\n",ans);
    return 0;
}