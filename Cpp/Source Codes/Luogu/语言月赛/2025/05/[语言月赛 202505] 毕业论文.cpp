#include<bits/stdc++.h>
#define int long long
using namespace std;
int w,f,a,r;
double re,aigc;
signed main(){
    scanf("%lld%lld%lld%lld",&w,&f,&a,&r);
    if (w!=0){
        if (w<r || f*1.0/w>0.2 || a*1.0/w>0.3){
            printf("Rejected");
        }else{
            printf("Accepted");
        }
    }else{
        printf("Rejected");
    }
    return 0;
}