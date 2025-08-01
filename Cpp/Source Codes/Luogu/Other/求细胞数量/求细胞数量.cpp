#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=105;
int n,m,cnt;
int dx[4]={-1,0,0,1},dy[4]={0,-1,1,0};
char a[maxN][maxN];
inline void dfs(int x,int y){
    a[x][y]='0';
    for (int i=0;i<4;i++){
        int newX=x+dx[i];
        int newY=y+dy[i];
        if (newX<1 || newX>n || newY<1 || newY>m){
            continue;
        }
        if (a[newX][newY]>'0'){
            dfs(newX,newY);
        }
    }
    return;
}
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (a[i][j]>'0'){
                cnt++;
                dfs(i,j);
            }
        }
    }
    printf("%lld",cnt);
    return 0;
}