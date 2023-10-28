#include<bits/stdc++.h>
using namespace std;
struct clc{
    int z,y,x;clc(int z=0,int y=0,int x=0):x(x),y(y),z(z){}
};
#define orz(t) [t[0]][t[1]][t[2]][t[3]]
clc operator+(const clc x,const clc y){
    return clc(x.z+y.z,x.y+y.y,x.x+y.x);
}
bool operator<(const clc x,const clc y){
    if(x.x^y.x)return x.x<y.x;if(x.y^y.y)return x.y<y.y;return x.z<y.z;
}
bool cmp(const clc x,const clc y){
    if(x.x+x.y==y.x+y.y)return x<y;return x.x+x.y<y.x+y.y;
}
clc _[33]{{1,1,2},{3,4,3},{2,2,2},{5,6,3},{6,7,5},{4,4,4},{4,5,4},{4,5,4},
{3,3,2},{7,8,3},{8,10,5},{8,9,6},{8,8,6},{8,8,6},{9,10,5},{6,6,4},{7,8,5},
{6,7,5},{6,7,4},{7,8,7},{7,8,5},{6,7,5},{7,8,7},{5,5,4},{5,5,5},{6,8,5},
{5,6,4},{6,7,4},{7,8,5},{5,5,5},{5,6,5},{5,6,4},{4,4,2}};
clc tab[5][30],g[5][32][32],h[5][32][32];
int o[4][4][4][4],go[5][32][32],w[64],F[5][32][32],__[5]{1,1,2,6,24};
long long f[64][32];
long long res(clc t,int i,int k){
    long long f=t.y;int T=t.x;
    if(T>__[k])
    {
        long long tt=T-__[k];tt+=tt&1;
        f+=((tt<<(i-1))-tt)*k;T-=tt;
    }if(T>0)f+=::f[i-1][T];return f;
}
void z(){
    int Z[4]={0},n,k;
	scanf("%d%d",&n,&k);
    for(int i=n;i;w[i--]=o orz(Z))for(int j=0;j<k;j++)scanf("%d",&Z[j]),--Z[j];
    for(int i=1;i<=__[k];++i)f[1][i]=F[k][i][w[1]];
    for(int i=2;i<=n;i++)for(int j=1;j<=__[k];++j)
    f[i][j]=min(res(g[k][j][w[i]],i,k),res(h[k][j][w[i]],i,k));
    printf("%lld\n",f[n][1]);
}
int main(){
    tab[1][0]=_[0];tab[2][0]=_[1],tab[2][1]=_[2];
    for(int i=0;i<6;i++)tab[3][i]=_[i+3];
    for(int i=0;i<24;i++)tab[4][i]=_[i+9];
    int x[4]{0},y[4]{0},Z[4]{0,1,2,0};
    ***o[1]=1;
    for(int i=1;next_permutation(Z,Z+3);++i)o orz(Z)=i;Z[3]=3;
    for(int i=1;next_permutation(Z,Z+4);++i)o orz(Z)=i;
    for(int k=1;k<5;k++){
    int Z[4]{0};for(int i=0;i<k;++i)x[i]=y[i]=i;
    do {
        do {
            for (int i=0;i<k;i++)Z[y[x[i]]]=i;
            go[k][o orz(x)][o orz(y)]=o orz(Z);
        } while(next_permutation(y,y+k));
    } while(next_permutation(x,x+k));
    for (int i=0;i<__[k];++i)F[k][1][i]=(g[k][1][i]=h[k][1][i]=tab[k][i]).z;
    for (int i=2;i<=__[k];++i)
    {
        for (int j=0;j<__[k];++j)
        g[k][i][j]=g[k][i-1][j]+tab[k][0],
        h[k][i][j]=h[k][i-1][j]+tab[k][0],
        F[k][i][j]=F[k][i-1][j]+tab[k][0].z;
        for (int j=0;j<__[k];++j)for(int l=0;l<__[k];++l)
        g[k][i][go[k][j][l]]=min(g[k][i][go[k][j][l]],g[k][i-1][j]+tab[k][l]),
        h[k][i][go[k][j][l]]=min(h[k][i][go[k][j][l]],h[k][i-1][j]+tab[k][l],cmp),
        F[k][i][go[k][j][l]]=min(F[k][i][go[k][j][l]],F[k][i-1][j]+tab[k][l].z);
    }
    }
    int _;
	scanf("%d",&_);
	while(_--)z();
}
