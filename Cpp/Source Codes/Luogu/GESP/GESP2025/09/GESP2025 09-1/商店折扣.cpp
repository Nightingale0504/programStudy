#include<bits/stdc++.h>
#define int long long
using namespace std;
int x,y,n,p;
double a,b,ans;
signed main(){
    scanf("%lld%lld%lld%lld",&x,&y,&n,&p);
    if (p>=x){
        a=p*1.0-y*1.0;
    }else{
        a=p;
    }
    b=p*1.0*(n*1.0/(10*1.0));
    ans=min(a,b);
    printf("%.2lf",ans);
    return 0;
}