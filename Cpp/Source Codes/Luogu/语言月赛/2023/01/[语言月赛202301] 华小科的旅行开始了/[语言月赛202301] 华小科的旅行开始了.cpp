#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e3+5;
int n,m,sx,sy;
int a[maxN][maxN];
inline void dfs(int x,int y){
    printf("%lld %lld\n",x,y);
    int newX=a[x][2*y-1];
    int newY=a[x][2*y];
    if (newX==0 && newY==0){
        return;
    }else{
        dfs(newX,newY);
    }
    return;
}
signed main(){
    scanf("%lld%lld%lld%lld",&m,&n,&sx,&sy);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=2*m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    dfs(sx,sy);
    return 0;
}