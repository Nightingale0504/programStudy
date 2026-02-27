#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,r,c,ans;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%lld%lld",&r,&c);
        ans++;
        m-=r*c;
        if (m<0){
            break;
        }
    }
    printf("%lld\n",ans*2);
    return 0;
}