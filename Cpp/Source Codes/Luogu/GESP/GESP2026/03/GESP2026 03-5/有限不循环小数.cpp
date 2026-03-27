#include<bits/stdc++.h>
#define int long long
using namespace std;
int l,r,cnt;
signed main(){
    scanf("%lld%lld",&l,&r);
    for (int i=l;i<=r;i++){
        int t=i;
        while (t%2==0){
            t/=2;
        }
        while (t%5==0){
            t/=5;
        }
        if (t==1){
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}