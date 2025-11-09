#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=5e5+5;
int n,k,t,sum[maxN];
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        scanf("%lld",&t);
        sum[i]=sum[i-1]^t;
    }
    
    return 0;
}