#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
signed main(){
    scanf("%lld%lld",&a,&b);
    if (a>0){
        if (b>0){
            printf("NorthEast");
        }else{
            printf("NorthWest");
        }
    }else{
        if (b>0){
            printf("SouthEast");
        }else{
            printf("SouthWest");
        }
    }
    return 0;
}