#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,ans,k,t=LLONG_MAX;
struct Node{
    int x,y;
}a[maxN];
inline bool cmp(Node a,Node b){
    return a.x<b.x;
}
signed main(){
    scanf("%lld%lld",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%lld%lld",&a[i].x,&a[i].y);
        t=min(t,a[i].x+a[i].y);
    }
    sort(a+1,a+n+1,cmp);
    for (int i=0;i<=n;i++){
        k+=a[i].x;
        if (k>m){
            break;
        }
        ans=max(ans,(m-k)/t*2+i);
    }
    printf("%lld",ans);
    return 0;
}