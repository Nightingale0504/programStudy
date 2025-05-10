#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5;
int t,n,a[maxN],b[maxN];
signed main(){
    scanf("%lld",&t);
    while (t--){
        scanf("%lld",&n);
        for (int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }
        sort(a+1,a+n+1);
        int t=unique(a+1,a+n+1)-a;
        for (int i=1;i<=n;i++){
            printf("%lld ",lower_bound(a+1,a+t,b[i])-a);
        }
        printf("\n");
    }
    return 0;
}