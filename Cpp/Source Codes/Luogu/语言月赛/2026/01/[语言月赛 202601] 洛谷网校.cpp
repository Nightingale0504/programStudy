#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,c,st,en,t1,t2;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%lld",&c);
        en=INT_MAX;
        while (c--){
            scanf("%lld%lld",&t1,&t2);
            if (t1>st){
                en=min(en,t2);
            }
        }
        if (en==INT_MAX){
            printf("-1\n");
            return 0;
        }
        st=en;
    }
    printf("%lld\n",en);
    return 0;
}