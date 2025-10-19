#include<bits/stdc++.h>
using namespace std;
#define int long long
int l1,r1,l2,r2,cnt;
signed main(){
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);
    scanf("%lld%lld%lld%lld",&l1,&r1,&l2,&r2);
    if (l2>=l1 && l2<=r1 && r2>l1){
        cnt=r1-l2;
    }
    if (l2>=r1){
        cnt=0;
    }
    printf("%lld",cnt);
    return 0;
}