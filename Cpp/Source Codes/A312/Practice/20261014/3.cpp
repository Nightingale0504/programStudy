#include<bits/stdc++.h>
#define int long long
using namespace std;
int level,a;
double b;
signed main(){
    scanf("%lld",&level);
    if (level!=1 && level!=2 && level!=3){
        printf("等级无效");
    }else{
        scanf("%lld",&a);
        b=a*(1-0.1*level);
        printf("%lf",b);
    }
    return 0;
}