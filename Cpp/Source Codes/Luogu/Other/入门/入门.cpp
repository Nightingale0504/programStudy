#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=25;
char a[maxN][maxN],book[maxN][maxN];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int n,m,sx,sy,cnt;
inline void dfs(int x,int y){
    for (int i=0;i<4;i++){
        int newX=x+dx[i];
        int newY=y+dy[i];
        if (newX<1 || newX>n || newY<1 || newY>m){
            continue;
        }
        if (book[newX][newY]==0 && a[newX][newY]!='#'){
            cnt++;
            book[newX][newY]=1;
            dfs(newX,newY);
        }
    }
    return;
}
signed main(){
    scanf("%lld%lld",&m,&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>a[i][j];
            if (a[i][j]=='@'){
                sx=i;
                sy=j;
            }
        }
    }
    dfs(sx,sy);
    printf("%lld",cnt);
    return 0;
}