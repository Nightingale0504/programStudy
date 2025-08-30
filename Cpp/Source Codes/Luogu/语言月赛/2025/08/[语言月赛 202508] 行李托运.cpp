#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x,a,b;
bool flag=false;
signed main(){
    scanf("%lld",&n);
    while (n--){
        scanf("%lld",&x);
        if (x==0 && !flag){
            a++;
            b++;
        }else if (x==-1 && !flag){
            a++;
        }else if (x==1){
            flag=true;
        }
    }
    printf("%lld %lld",a,b);
    return 0;
}