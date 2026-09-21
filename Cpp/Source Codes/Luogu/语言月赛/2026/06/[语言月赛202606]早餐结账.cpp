#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b,p,q,m;
int ans1,ans2;
signed main(){
    scanf("%lld%lld%lld%lld%lld",&a,&b,&p,&q,&m);
    ans1=a*p+b*q;
    ans2=m-ans1;
    printf("%lld\n%lld\n",ans1,ans2);
    return 0;
}