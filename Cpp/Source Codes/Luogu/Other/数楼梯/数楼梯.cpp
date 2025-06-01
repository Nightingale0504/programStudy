#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,dp[5005][2005],m=1;;
signed main(){
    scanf("%lld",&n);
    dp[1][1]=1;
    dp[2][1]=2;
    for (int i=3;i<=n;i++){
        for (int j=1;j<=m;j++){
            dp[i][j]+=dp[i-1][j]+dp[i-2][j];
            if (dp[i][j]>=10){
                dp[i][j]%=10;
                dp[i][j+1]=1;
            }
        }
        if (dp[i][m+1]==1){
            m++;
        }
    }
    for (int i=m;i>=1;i--){
        printf("%lld",dp[n][i]);
    }
    return 0;
}