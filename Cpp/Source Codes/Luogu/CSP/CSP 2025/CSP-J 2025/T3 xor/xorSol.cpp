#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=5e5+5;
int n,k,t,sum[maxN],a[maxN];
int l=0,cnt;
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        scanf("%lld",&t);
        sum[i]=sum[i-1]^t;
    }
    memset(a,-1,sizeof(a));
    a[0]=0;
    for (int r=1;r<=n;r++){
        t=sum[r]^t;
        if (a[t]>=l){
            cnt++;
            l=r+1;
        }
        a[sum[r]]=r;
    }
    printf("%lld",cnt);
    return 0;
}