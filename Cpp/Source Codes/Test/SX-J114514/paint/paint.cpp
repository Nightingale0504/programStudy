#include<bits/stdc++.h>
using namespace std;
#define int long long
int l1,r1,l2,r2,cnt;
signed main(){
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);
    scanf("%lld%lld%lld%lld",&l1,&r1,&l2,&r2);
    cnt=max((int)0,min(r1,r2)-max(l1,l2));
    printf("%lld",cnt);
    return 0;
}