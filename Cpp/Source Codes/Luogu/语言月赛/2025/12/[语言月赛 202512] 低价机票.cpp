#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=15;
int p[maxN][maxN][maxN],x[maxN],y[maxN];
int n,m,cost=INT_MAX,sum;
signed main(){
    scanf("%lld%lld",&m,&n);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            for (int k=1;k<=n;k++){
                scanf("%lld",&p[i][j][k]);
            }
        }
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&x[i]);
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&y[i]);
    }
    for (int a=1;a<=n;a++){
        sum=x[a];
        for (int t1=1;t1<=m;t1++){
            for (int b=1;b<=n;b++){
                if (a==b){
                    continue;
                }
                if (p[t1][a][b]==-1){
                    continue;
                }
                sum+=p[t1][a][b];
                for (int t2=t1+1;t2<=m;t2++){
                    for (int c=1;c<=n;c++){
                        if (a==c || b==c){
                            continue;
                        }
                        if (p[t2][b][c]==-1){
                            continue;
                        }
                        sum+=p[t2][b][c];
                        sum+=y[c];
                        cost=min(cost,sum);
                        sum-=p[t2][b][c];
                        sum-=y[c];
                    }
                }
                sum-=p[t1][a][b];
            }
        }
    }
    printf("%lld\n",cost);
    return 0;
}