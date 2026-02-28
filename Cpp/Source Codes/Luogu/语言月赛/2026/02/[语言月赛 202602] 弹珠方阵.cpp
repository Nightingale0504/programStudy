#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=25,maxD=405;
int n,m,d,a[maxN][maxN],mmax=INT_MIN,dzc[maxD];
bool hrk=1,flag=1;
signed main(){
    scanf("%lld%lld%lld",&n,&m,&d);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
            if (a[i][j]==d){
                hrk=0;
            }
        }
    }
    if (hrk){
        printf("Hrk");
        return 0;
    }
    for (int sx=1;sx<=n;sx++){
        for (int sy=1;sy<=m;sy++){
            for (int ex=1;ex<=n;ex++){
                for (int ey=1;ey<=m;ey++){
                    memset(dzc,0,sizeof(dzc));
                    for (int i=sx;i<=ex;i++){
                        for (int j=sy;j<=ey;j++){
                            dzc[a[i][j]]++;
                        }
                    }
                    for (int i=1;i<=d;i++){
                        if (dzc[i]==0){
                            flag=0;
                        }
                    }
                    if (flag){
                        mmax=max(mmax,(ex-sx+1)*(ey-sy+1));
                    }
                }
            }
        }
    }
    printf("%lld",mmax);
    return 0;
}