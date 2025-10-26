#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,t,now=1,a[maxN],lis[maxN];
map<int,int> m;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&t);
        m[t]=i;
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&t);
        a[i]=m[t];
    }
    lis[now]=a[1];
    for (int i=2;i<=n;i++){
        if (a[i]>lis[now]){
            now++;
            lis[now]=a[i];
        }else{
            t=lower_bound(lis+1,lis+now+1,a[i])-lis;
            lis[t]=a[i];
        }
    }
    printf("%lld",now);
    return 0;
}