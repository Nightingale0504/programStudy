#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=55,maxM=405;
int maxH,maxT,n;
int h[maxN],t[maxN],kal[maxN];
int dp[maxM][maxM];
signed main(){
    scanf("%lld%lld",&maxH,&maxT);
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld%lld%lld",&h[i],&t[i],&kal[i]);
    }
    for (int i=1;i<=n;i++){
        for (int j=maxH;j>=h[i];j--){
            for (int k=maxT;k>=t[i];k--){
                dp[j][k]=max(dp[j][k],dp[j-h[i]][k-t[i]]+kal[i]);
            }
        }
    }
    printf("%lld",dp[maxH][maxT]);
    return 0;
}