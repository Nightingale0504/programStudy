#include<bits/stdc++.h>
using namespace std;
#define int long long
int T,n,x,cnt;
signed main(){
    scanf("%lld",&T);
    while (T--){
        cnt=0;
        scanf("%lld",&n);
        for (int i=1;i<=n;i++){
            scanf("%lld",&x);
            for (int j=1;j<=x;j++){
                if (i==1 || (j==1 || j==x) || (i*j)%10==6){
                    cnt++;
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}