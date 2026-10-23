#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
double a;
signed main(){
    scanf("%lld",&n);
    if (n<=100){
        a=0.5*n;
    }else if (n>100 && n<=200){
        a=50+0.6*n;
    }else{
        a=110+0.8*n;
    }
    printf("%lld\n",a);
    return 0;
}