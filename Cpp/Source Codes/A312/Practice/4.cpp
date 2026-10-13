#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        for (int j=n-i;j>=1;j--){
            printf(" ");
        }
        for (int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}