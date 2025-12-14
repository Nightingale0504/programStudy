#include<bits/stdc++.h>
using namespace std;
#define int long long
int T;
signed main(){
    scanf("%lld",&T);
    while(T--){
        int n;
        scanf("%lld",&n);
        printf("%lld\n",(long long)sqrt(n)/3);
    }
    return 0;
}