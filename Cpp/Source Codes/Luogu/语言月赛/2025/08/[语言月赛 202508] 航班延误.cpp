#include<bits/stdc++.h>
using namespace std;
#define int long long
int x,a,b,t;
signed main(){
    scanf("%lld%lld%lld%lld",&x,&a,&b,&t);
    if (x<60){
        printf("0");
    }else if (x>=60 && x<120){
        printf("%lld",a);
    }else if (x>=120 && x<240){
        printf("%lld",b);
    }else{
        printf("%lld",t);
    }
    return 0;
}