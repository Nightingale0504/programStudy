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
    for (int i=1;i<=n;i++){
        if (i%2==1){
            for (int j=1;j<=m;j++){
                b[++cnt]=a[i][j];
            }
        }else{
            for (int j=m;j>=1;j--){
                b[++cnt]=a[i][j];
            }
        }
    }
    for (int i=1;i<=cnt;i++){
        t++;
        if (b[i]==1){
            ccnt++;
        }
        if (t==d){
            if (i==cnt || b[i+1]==0){
                break;
            }
            t=0;
        }
    }
    printf("%lld",ccnt);
    return 0;
}