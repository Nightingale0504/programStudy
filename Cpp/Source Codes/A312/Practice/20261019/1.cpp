#include<bits/stdc++.h>
#define int long long
using namespace std;
int num,price,total;
double t;
signed main(){
    scanf("%lld%lld",&price,&num);
    total=num*price;
    if (total>=200){
        t=total*0.9;
    }
    printf("%lf",t);
    return 0;
}