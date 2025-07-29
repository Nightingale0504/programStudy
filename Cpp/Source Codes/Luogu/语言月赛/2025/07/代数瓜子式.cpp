#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7,maxN=605;
int n,q,k,col,row,ans=1,x,y;
int a=1,b=1,c=1,d=1;
int A[maxN][maxN],B[maxN][maxN],C[maxN][maxN];
int dCol[maxN],dRow[maxN];
inline int f(int array[maxN][maxN],int t){
    int x=1,y=1;
    for (int i=1;i<=t;i++){
        x=x*array[i][i]%mod;
        y=y*array[i][t-i+1]%mod;
    }
    return (x-y+mod)%mod;
}
signed main(){
    scanf("%lld%lld",&n,&q);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%lld",&A[i][j]);
        }
    }
    while (q--){
        memset(dCol,0,sizeof(dCol));
        memset(dRow,0,sizeof(dRow));
        memset(B,0,sizeof(B));
        memset(C,0,sizeof(C));
        a=1;
        b=1;
        c=1;
        d=1;
        scanf("%lld",&k);
        for (int i=1;i<=k;i++){
            scanf("%lld",&row);
            dRow[row]=1;
        }
        for (int i=1;i<=k;i++){
            scanf("%lld",&col);
            dCol[col]=1;
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (dRow[i] && dCol[j]){
                    C[c][d]=A[i][j];
                    d++;
                    if (d>k){
                        c++;
                        d=1;
                    }
                }else if (!dRow[i] && !dCol[j]){
                    B[a][b]=A[i][j];
                    b++;
                    if (b>n-k){
                        a++;
                        b=1;
                    }
                }
            }
        }
        int sizeB=n-k;
        int fB=f(B,sizeB);
        int fC=f(C,k);
        int ans=fB*fC%mod;
        printf("%lld\n",ans);
    }
    return 0;
}