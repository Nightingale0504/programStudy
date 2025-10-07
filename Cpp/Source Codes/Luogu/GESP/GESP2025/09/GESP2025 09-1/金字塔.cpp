#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        ans+=i*i;
    }
    printf("%lld",ans);
    return 0;
}