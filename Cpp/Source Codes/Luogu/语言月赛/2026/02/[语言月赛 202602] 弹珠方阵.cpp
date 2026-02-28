#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=25,maxD=405;
int n,m,d,a[maxN][maxN],mmax=INT_MIN,cnt[maxD],t;
bool book[maxD];
signed main(){
    scanf("%lld%lld%lld",&n,&m,&d);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
            if (book[a[i][j]]==0){
                book[a[i][j]]=1;
                t++;
            }
        }
    }
    if (t<d){
        printf("Hrk");
        return 0;
    }
    for (int sx=1;sx<=n;sx++){
        for (int sy=1;sy<=m;sy++){
            for (int ex=sx;ex<=n;ex++){
                for (int ey=sy;ey<=m;ey++){
                    memset(cnt,0,sizeof(cnt));
                    int sum=0;
                    for (int i=sx;i<=ex;i++){
                        for (int j=sy;j<=ey;j++){
                            if (cnt[a[i][j]]==0){
                                sum++;
                            }
                            cnt[a[i][j]]++;
                        }
                    }
                    if (sum==d){
                        mmax=max(mmax,(ex-sx+1)*(ey-sy+1));
                    }
                }
            }
        }
    }
    if (mmax==0){
        printf("Hrk");
    }else{
        printf("%lld",mmax);
    }
    return 0;
}