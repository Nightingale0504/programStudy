#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
    scanf("%lld",&n);
    if (n==1){
        printf("0");
    }else{
        printf("%lld",n/2);
    }
    return 0;
}