#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if ((i==1 && j==1) || (i==n && j==n) || (i==1 && j==n) || (i==n && j==1)){
                printf("+");
            }else if (i==1 || i==n){
                printf("-");
            }else if (j==1 || j==n){
                printf("|");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}