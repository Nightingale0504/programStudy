#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
signed main(){
    scanf("%lld",&n);
    while (n--){
        int a;
        scanf("%lld",&a);
        ans+=a;
    }
    printf("%lld",ans);
    return 0;
}