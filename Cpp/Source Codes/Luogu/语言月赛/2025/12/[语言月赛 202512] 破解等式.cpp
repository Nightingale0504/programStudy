#include<bits/stdc++.h>
using namespace std;
#define int long long
int T,a,b,c,cnt;
signed main(){
    scanf("%lld",&T);
    while (T--){
        cnt=0;
        scanf("%lld%lld%lld",&a,&b,&c);
        for (int x=1;x<=a;x++){
            if (a%x==0){
                for (int y=1;y<c;y++){
                    if (a/x+b*y==c){
                        cnt++;
                    }
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}