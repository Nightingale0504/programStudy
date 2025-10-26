#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c,d;
signed main(){
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if (a==b || a==c || b==c){
        printf("Report");
    }else{
        if (a==d){
            printf("A");
        }else if (b==d){
            printf("B");
        }else if (c==d){
            printf("C");
        }
    }
    return 0;
}