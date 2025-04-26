#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e5+5;
int n,now,lis[maxN],num;
struct city{
    int n,s;
}c[maxN];
inline bool cmp(city a,city b){
    return a.n<b.n;
}
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld%lld",&c[i].n,&c[i].s);
    }
    sort(c+1,c+n+1,cmp);
    for (int i=1;i<=n;i++){
        if (c[i].s>lis[now]){
            now++;
            lis[now]=c[i].s;
        }else{
            num=lower_bound(lis+1,lis+now+1,c[i].s)-lis;
            lis[num]=c[i].s;
        }
    }
    printf("%lld",now);
    return 0;
}