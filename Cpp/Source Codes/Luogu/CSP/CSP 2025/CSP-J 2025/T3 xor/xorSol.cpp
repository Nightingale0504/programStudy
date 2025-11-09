#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=5e5+5,maxA=5e6+5;;
int n,k,t,sum[maxN],a[maxA];
int cnt;
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        scanf("%lld",&t);
        sum[i]=sum[i-1]^t;
    }
    memset(a,-1,sizeof(a)); 
    int l=0;
    a[0]=0;
    for (int r=1;r<=n;r++){
        t=sum[r]^k;
        if (a[t]>=l){
            cnt++;
            l=r;
        }
        a[sum[r]]=r;
    }
    printf("%lld",cnt);
    return 0;
}