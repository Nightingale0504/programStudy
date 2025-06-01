#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k=1,dp[1005][2005];
signed main(){
    scanf("%lld%lld",&m,&n);
    dp[1][1]=1;
    dp[2][1]=2;
    for (int i=3;i<=n;i++){
        for (int j=1;j<=k;j++){
            dp[i][j]+=dp[i-1][j]+dp[i-2][j];
            if (dp[i][j]>=10){
                dp[i][j]%=10;
                dp[i][j+1]++;
            }
        }
        if (dp[i][m+1]==1){
            k++;
        }
    }
    for (int i=k;i>=1;i--){
        printf("%lld",dp[n-m][i]);
    }
    return 0;
}