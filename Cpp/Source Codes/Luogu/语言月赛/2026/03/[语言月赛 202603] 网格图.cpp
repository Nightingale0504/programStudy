#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=2*n+1;i++){
        for (int j=1;j<=2*m+1;j++){
            if (i%2==1 && j%2==1){
                printf("+");
            }else if (i%2==1 && j%2==0){
                printf("-");
            }else if (i%2==0 && j%2==1){
                printf("|");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}