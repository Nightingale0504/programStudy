#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,cnt;
int dx[4]={1,2,-2,-1},dy[4]{2,1,1,2};
inline void dfs(int x,int y){
    if (x<0 || x>n || y>m){
        return;
    }
    if (x==n && y==m){
        cnt++;
    }else{
        for (int i=0;i<4;i++){
            dfs(x+dx[i],y+dy[i]);
        }
    }
    return;
}
signed main(){
    scanf("%lld%lld",&n,&m);
    dfs(0,0);
    printf("%lld",cnt);
    return 0;
}