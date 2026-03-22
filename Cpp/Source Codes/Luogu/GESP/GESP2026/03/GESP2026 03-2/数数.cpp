#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,sum,cnt;
signed main(){
    scanf("%lld%lld",&a,&b);
    for (int i=a;i<=b;i++){
        sum=0;
        int t=i;
        while (t){
            if (t%10==2){
                sum++;
            };
            t/=10;
        }
        if (sum==3){
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}