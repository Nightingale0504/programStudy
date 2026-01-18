#include<bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
signed main(){
    scanf("%lld",&T);
    while(T--){
        int k=0,t=0;
        scanf("%lld",&n);
        while(n--){
            int a;
            scanf("%lld",&a);
            if (a==1){
                k++;
            }else if (a==2){
                t++;
            }else if (a==3){
                k++;
                t++;
            }else{
                k--;
                t--;
            }
        }
        if (k>t){
            printf("Kobayashi\n");
        }else if (k<t){
            printf("Tohru\n");
        }else{
            printf("Draw\n");
        }
    }
    return 0;
}