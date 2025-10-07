#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=15;
int n,m,a[maxN][maxN];
int mmax=0;
bool tmp;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            for (int k=i;k<=n;k++){
                for (int l=j;l<=m;l++){
                    tmp=true;
                    for (int x=i;x<=k;x++){
                        for (int y=j;y<=l;y++){
                            if (a[x][y]==0){
                                tmp=false;
                                break;
                            }
                        }
                        if (!tmp){
                            break;
                        }
                    }
                    if (tmp){
                        int s=(k-i+1)*(l-j+1);
                        mmax=max(mmax,s);
                    }
                }
            }
        }
    }
    printf("%lld",mmax);
    return 0;
}