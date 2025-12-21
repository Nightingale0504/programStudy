#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=55;
int n,xh,yh,xe,ye;
int a[maxN][maxN],b[maxN][maxN],ans=INT_MAX;
struct node{
    int x,y;
};
queue<node>q;
int dxh[8]={2,1,-1,-2,-2,-1,1,2};
int dyh[8]={1,2,2,1,-1,-2,-2,-1};
int dxe[4]={2,2,-2,-2};
int dye[4]={2,-2,2,-2};
signed main(){
    scanf("%lld%lld%lld%lld%lld",&n,&xh,&yh,&xe,&ye);
    memset(a,-1,sizeof(a));
    memset(b,-1,sizeof(b));
    node c={xh,yh};
    q.push(c);
    a[xh][yh]=0;
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        q.pop();
        for (int i=0;i<8;i++){
            int newX=x+dxh[i];
            int newY=y+dyh[i];
            if (newX>=0 && newX<n && newY>=0 && newY<n && a[newX][newY]==-1){
                a[newX][newY]=a[x][y]+1;
                node d={newX,newY};
                q.push(d);
            }
        }
    }
    node c={xe,ye};
    q.push(c);
    b[xe][ye]=0;
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        q.pop();
        for (int i=0;i<8;i++){
            int newX=x+dxh[i];
            int newY=y+dyh[i];
            if (newX>=0 && newX<n && newY>=0 && newY<n && b[newX][newY]==-1){
                b[newX][newY]=b[x][y]+1;
                node d={newX,newY};
                q.push(d);
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]!=-1 && b[i][j]!=-1){
                ans=min(ans,a[i][j]+b[i][j]);
            }
        }
    }
    if (ans==INT_MAX){
        printf("-1\n");
    }else{
        printf("%lld\n",ans);
    }
    return 0;
}