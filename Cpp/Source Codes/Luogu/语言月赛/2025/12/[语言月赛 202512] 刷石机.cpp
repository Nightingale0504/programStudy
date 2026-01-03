#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,q,T;
int xl,yl,xw,yw;
int ce,cw,cl,cs;
int a[maxN][maxN],b[maxN][maxN];
int qt[maxN],qx[maxN],qy[maxN];
signed main(){
    scanf("%lld%lld%lld%lld",&n,&m,&q,&T);
    scanf("%lld%lld%lld%lld",&xl,&yl,&xw,&yw);
    a[xw][yw]=1;
    a[xl][yl]=2;
    for (int i=1;i<=q;i++){
        scanf("%lld%lld%lld",&qt[i],&qx[i],&qy[i]);
    }
    for (int t=1;t<=T;t++){
        for (int c=1;c<=q;c++){
            if (qt[c]==t){
                if (a[qx[c]][qy[c]]==0){
                    ce++;
                }else if (a[qx[c]][qy[c]]==1){
                    cw++;
                }else if (a[qx[c]][qy[c]]==2){
                    cl++;
                }else if (a[qx[c]][qy[c]]==3){
                    cs++;
                }
            }
        }
        if (t==T){
            break;
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                b[i][j]=a[i][j];
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if (b[i][j]==3){
                    a[i][j]=0;
                }else if (b[i][j]==1 || b[i][j]==2){
                    a[i][j]=b[i][j];
                }else{
                    if ((i>1 && b[i-1][j]==1 || i<n && b[i+1][j]==1 || j>1 && b[i][j-1]==1 || j<m && b[i][j+1]==1) && (i>1 && b[i-1][j]==2 || i<n && b[i+1][j]==2 || j>1 && b[i][j-1]==2 || j<m && b[i][j+1]==2)){
                        a[i][j]=3;
                    }else if (i>1 && b[i-1][j]==1 || i<n && b[i+1][j]==1 || j>1 && b[i][j-1]==1 || j<m && b[i][j+1]==1){
                        a[i][j]=1;
                    }else if (i>1 && b[i-1][j]==2 || i<n && b[i+1][j]==2 || j>1 && b[i][j-1]==2 || j<m && b[i][j+1]==2){
                        a[i][j]=2;
                    }else{
                        a[i][j]=0;
                    }
                }   
            }
        }
    }
    printf("%lld %lld %lld %lld\n",ce,cw,cl,cs);
    return 0;
}