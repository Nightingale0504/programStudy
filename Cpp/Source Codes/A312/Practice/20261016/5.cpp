#include<bits/stdc++.h>
#define int long long
using namespace std;
int a;
inline bool judgePrime(int x){
    if (x==1) return false;
    for (int i=2;i*i<=x;i++){
        if (x%i==0) return false;
    }
    return true;
}
signed main(){
    scanf("%lld",&a);
    if (judgePrime(a)){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}