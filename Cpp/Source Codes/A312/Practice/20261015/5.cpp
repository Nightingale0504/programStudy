#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
inline int f(int n){
    if (n==1){
        return n;
    }else{
        return n*f(n-1);
    }
}
signed main(){
    scanf("%lld",&n);
    printf("%lld",f(n));
    return 0;
}