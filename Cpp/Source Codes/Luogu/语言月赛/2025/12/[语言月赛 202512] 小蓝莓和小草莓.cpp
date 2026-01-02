#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b;
signed main(){
    scanf("%lld%lld",&a,&b);
    if (a<3 || b<2){
        printf("0\n");
    }else{
        printf("%lld\n",min(a/3,b/2));
    }
    return 0;
}