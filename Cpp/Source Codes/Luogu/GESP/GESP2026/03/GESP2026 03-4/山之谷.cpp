#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=105;
int n,m,a[maxN][maxN],cnt;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if ((a[i-1][j-1]==0 || a[i][j]<=a[i-1][j-1]) && (a[i-1][j]==0 || a[i][j]<=a[i-1][j]) && (a[i-1][j+1]==0 || a[i][j]<=a[i-1][j+1]) && (a[i][j-1]==0 || a[i][j]<=a[i][j-1]) && (a[i][j+1]==0 || a[i][j]<=a[i][j+1]) && (a[i+1][j-1]==0 || a[i][j]<=a[i+1][j-1]) && (a[i+1][j]==0 || a[i][j]<=a[i+1][j]) && (a[i+1][j+1]==0 || a[i][j]<=a[i+1][j+1])){
                cnt++;
            }
        }
    }
    printf("%lld",cnt);
    return 0;
}