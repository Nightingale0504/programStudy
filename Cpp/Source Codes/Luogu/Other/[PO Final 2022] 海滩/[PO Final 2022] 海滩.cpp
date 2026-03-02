#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,b,a[maxN],cnt,sum,id=1;
signed main(){
    scanf("%lld%lld",&n,&b);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
        while (sum>b){
            sum-=a[id++];
        }
        cnt=max(cnt,i-id+1);
    }
    printf("%lld\n",cnt);
    return 0;
}