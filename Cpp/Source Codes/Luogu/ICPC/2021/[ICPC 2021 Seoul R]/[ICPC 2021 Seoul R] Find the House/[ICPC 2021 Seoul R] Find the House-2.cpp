#include<bits/stdc++.h>
using namespace std;
#define int long long
int t,pos,sum;
bool f=true;
signed main(){
    scanf("%lld",&t);
    while (t--){
        int x,z;
        char y;
        scanf("%lld %c %lld",&x,&y,&z);
        if (y=='L'){
            sum-=z;
        }else{
            sum+=z;
        }
    }
    scanf("%lld",&pos);
    pos+=sum;
    printf("%lld\n",pos);
    return 0;
}