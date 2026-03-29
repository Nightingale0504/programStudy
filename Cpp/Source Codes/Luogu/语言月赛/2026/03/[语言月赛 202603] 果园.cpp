#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,tmp,mmax;
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        scanf("%lld",&tmp);
        if (i<=k){
            mmax=max(mmax,tmp);
        }else{
            if (tmp>mmax){
                printf("%lld",tmp);
                return 0;
            }
        }
        if (i==n){
            printf("%lld",tmp);
        }
    }
    return 0;
}