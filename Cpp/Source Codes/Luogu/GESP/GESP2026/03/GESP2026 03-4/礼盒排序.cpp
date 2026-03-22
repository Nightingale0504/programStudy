#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e3+5;
int n,k,tmp;
struct node{
    int mmin=INT_MAX,mmax=INT_MIN,total=0,id=0;
}a[maxN];
inline bool cmp(node x,node y){
    if (x.total!=y.total){
        return x.total<y.total;
    }
    if (x.mmax!=y.mmax){
        return x.mmax<y.mmax;
    }
    if (x.mmin!=y.mmin){
        return x.mmin<y.mmin;
    }
    return x.id<y.id;
}
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        a[i].id=i;
        for (int j=1;j<=k;j++){
            scanf("%lld",&tmp);
            a[i].total+=tmp;
            a[i].mmax=max(a[i].mmax,tmp);
            a[i].mmin=min(a[i].mmin,tmp);
        }
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n;i++){
        printf("%lld ",a[i].id);
    }
    return 0;
}