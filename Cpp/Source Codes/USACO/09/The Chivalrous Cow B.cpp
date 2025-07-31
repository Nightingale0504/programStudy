#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=155;
struct node{
    int x,y,step;
};
queue<node> que;
int n,m;
int sx,sy,ex,ey;
char a[maxN][maxN];
int dx[8]={1,1,-1,-1,2,2,-2,-2};
int dy[8]={2,-2,2,-2,1,-1,1,-1};
signed main(){
    scanf("%lld%lld",&m,&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>a[i][j];
            if (a[i][j]=='K'){
                sx=i;
                sy=j;
            }
            if (a[i][j]=='H'){
                ex=i;
                ey=j;
            }
        }
    }
    node t={sx,sy,0};
    que.push(t);
    a[sx][sy]='*';
    while (!que.empty()){
        int x=que.front().x;
        int y=que.front().y;
        int step=que.front().step;
        que.pop();
        for (int i=0;i<8;i++){
            int newX=x+dx[i];
            int newY=y+dy[i];
            if (newX<1 || newX>n || newY<1 || newY>m){
                continue;
            }
            if (a[newX][newY]!='*'){
                t={newX,newY,step+1};
                que.push(t);
                a[newX][newY]='*';
                if (newX==ex && newY==ey){
                    printf("%lld",step+1);
                    return 0;
                }
            }
        }
    }
    return 0;
}