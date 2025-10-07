#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt,a,x;
bool p;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        if (i<10){
            cnt++;
            continue;
        }
        int t=i;
        a=t%10;
        p=true;
        while (t>0){
            x=t%10;
            t/=10;
            if (x!=a){
                p=false;
            }
        }
        if (p){
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}