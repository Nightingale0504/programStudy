#include<bits/stdc++.h>
#define int long long
using namespace std;
int cnt;
signed main(){
    for (int i=1;i<=100;i++){
        if (cnt==5){
            cnt=0;
            printf("\n");
        }
        if (i%7==0){
            printf("%lld ",i);
            cnt++;
        }
    }
    return 0;
}