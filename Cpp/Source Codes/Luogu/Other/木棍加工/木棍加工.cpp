#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e5+5;
int n,now,lis[maxN],num;
struct stick{
    int l,w;
}s[maxN];
inline bool cmp(stick a,stick b){
    if (a.l==b.l){
        return a.w>b.w;
    }
    return a.l>b.l;
}
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld%lld",&s[i].l,&s[i].w);
    }
    sort(s+1,s+n+1,cmp);
    for (int i=1;i<=n;i++){
        if (s[i].w>lis[now]){
            now++;
            lis[now]=s[i].w;
        }else{
            num=lower_bound(lis+1,lis+now+1,s[i].w)-lis;
            lis[num]=s[i].w;
        }
    }
    printf("%lld",now);
    return 0;
}