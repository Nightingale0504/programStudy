#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=505,maxNN=2.5e5+5;
int n,m,d,a[maxN][maxN],b[maxNN],cnt,ccnt,t;
signed main(){
    scanf("%lld%lld%lld",&n,&m,&d);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for (int j=1;j<=m;j++){
        if (j%2==1){
            for (int i=1;i<=n;i++){
                b[++cnt]=a[i][j];
            }
        }else{
            for (int i=n;i>=1;i--){
                b[++cnt]=a[i][j];
            }
        }
    }
    for (int i=1;i<=cnt;i++){
        t++;
        if (b[i]==1){
            ccnt++;
        }
        
    }
    printf("%lld",ccnt);
    return 0;
}