#include<bits/stdc++.h>
#define int long long
using namespace std;
inline bool isEven(int n){
    if (n & 1){
        return false;
    } else {
        return true;
    }
}
int a;
signed main(){
    for (int i=1;i<=5;i++){
        scanf("%lld",&a);
        if (isEven(a)){
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }
    return 0;
}