#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e6+5;
int n,m,t,a[maxN];
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    while (m--){
        int q;
        scanf("%lld",&q);
        if(binary_search(a+1,a+n+1,q)){
            t=lower_bound(a+1,a+n+1,q)-a;
        }else{
            t=-1;
        }
        printf("%lld\n",t);
    }
    return 0;
}