#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
signed main(){
    scanf("%lld%lld",&m,&n);
    while (m--){
        int x;
        scanf("%lld",&x);
        if (x==1){
            if (n<10){
                n++;
            }
        }else{
            if (n>0){
                n--;
            }
        }
    }
    printf("%lld\n",n);
    return 0;
}