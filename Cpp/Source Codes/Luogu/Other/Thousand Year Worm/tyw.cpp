#include<bits/stdc++.h> 
using namespace std;
#define maxN 1000010
#define inf 0x3f3f3f3f
int n,m;
int l[maxN],g[maxN],f[2][maxN][2],pr,nt;
int t[2],s[2][maxN];
int ass;
void fuck(){
    memset(f,0x3f,sizeof(f));
    t[1]=0;
    for (int i=1;i<=3;i++){
        for (int j=g[i];j<=g[i]+2;j++){
            if (j>=g[1]){
                s[1][++t[1]]=j;
            }
        }
    }
    for (int i=1;i<=t[1];i++){
        f[1][i][0]=s[1][i]-g[1];
    }
    pr=0;
    nt=1;
    for (int i=2;i<=n;i++){
        pr^=1;
        nt^=1;
        t[nt]=0;
        int lf=max(1,i-2),rf=min(n,i+2);
        for (int j=lf;j<=rf;j++){
            for (int k=g[j];k<=g[j]+2;k++){
                if (k>=g[i]){
                    s[nt][++t[nt]]=k;
                }
            }
        }
        for (int j=1;j<=t[nt];j++){
            f[nt][j][1]=f[nt][j][0]=inf;
            for (int k=1;k<=t[pr];k++){
                if (s[pr][k]>s[nt][j]){
                    f[nt][j][0]=min(f[nt][j][0],f[pr][k][1]);
                }else if (s[pr][k]<s[nt][j]){
                    f[nt][j][1]=min(f[nt][j][1],f[pr][k][0]);
                }else{
                    f[nt][j][0]=min(f[nt][j][0],f[pr][k][0]);
                    f[nt][j][1]=min(f[nt][j][1],f[pr][k][1]);
                }
            }
            f[nt][j][0]+=s[nt][j]-g[i];
            f[nt][j][1]+=s[nt][j]-g[i];
        }
    }
    int re=inf;
    for (int i=1;i<=t[nt];i++){
        re=min(re,f[nt][i][0]);
    }
    ass+=re;
}
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d%d",&l[i],&g[i]);
    }
    fuck();
    for (int i=1;i<=n;i++){
        g[i]=maxN-l[i];
    }
    fuck();
    printf("%d",ass);
    return 0;
}