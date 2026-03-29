#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a,b,c,d,ans;
signed main(){
    scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
    ans=n-a-b-c-d;
    printf("%lld",ans);
    return 0;
}