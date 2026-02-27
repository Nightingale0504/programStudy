#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b,c,d,e,score;
signed main(){
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    score=a+b+c+d+e;
    if (score>=0 && score<=99){
        printf("Grey");
    }else if (score>=100 && score<=119){
        printf("Blue");
    }else if (score>=120 && score<=169){
        printf("Green");
    }else if (score>=170 && score<=229){
        printf("Orange");
    }else{
        printf("Red");
    }
    return 0;
}