#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
signed main(){
    scanf("%lld",&n);
    if (n==1){
        printf("-1\n");
    }else{
        printf("%lld\n",(n+1)/2);
    }
    return 0;
}