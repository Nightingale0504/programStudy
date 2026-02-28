#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b,x,y,m,cnt;
signed main(){
    scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&m);
    if (x>y){
        if (b*y<=m){
            cnt+=b;
        }else{
            cnt+=m/y;
        }
        m-=cnt*y;
        if (a*x<=m){
            cnt+=a;
        }else{
            cnt+=m/x;
        }
    }else{
        if (a*x<=m){
            cnt+=a;
        }else{
            cnt+=m/x;
            
        }
        m-=cnt*x;
        if (b*y<=m){
            cnt+=b;
        }else{
            cnt+=m/y;
        }
    }
    printf("%lld",cnt);
    return 0;
}