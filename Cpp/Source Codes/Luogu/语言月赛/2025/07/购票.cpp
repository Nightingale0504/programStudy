#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int n,a,b;
signed main(){
    scanf("%llu%llu%llu",&n,&a,&b);
    int ans1=n*a;
    if (ans1<=b){
        printf("%llu",ans1);
    }else{
        printf("%llu",b);
    }
    return 0;
}