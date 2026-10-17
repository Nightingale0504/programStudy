#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt1,cnt2;
signed main(){
    do{
        scanf("%lld",&n);
        if (n==0){
            break;
        }else if (n<0){
            cnt1++;
        }else{
            cnt2++;
        }
    } while(n!=0);
    printf("%lld %lld\n",cnt1,cnt2);
    return 0;
}