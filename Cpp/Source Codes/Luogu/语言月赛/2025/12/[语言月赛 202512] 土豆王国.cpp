#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x,p,sum,num;
signed main(){
    scanf("%lld",&n);
    while (n--){
        scanf("%lld%lld",&x,&p);
        if (x>=500 && p<500){
            num++;
            sum+=p;
        }
    }
    printf("%lld %lld\n",num,sum);
    return 0;
}