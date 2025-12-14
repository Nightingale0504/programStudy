#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
    int x;
    int y;
    int step;
};
const int maxH=505;
int h,w;
char a[maxH][maxH];
int book[maxH][maxH];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
queue<node> que;
signed main(){
    scanf("%lld%lld",&h,&w);
    for (int i=1;i<=h;i++){
        for (int j=1;j<=w;j++){
            cin>>a[i][j];
        }
    }
    node c={1,1,0};
    book[1][1]=1;
    que.push(c);
    while (!que.empty()){
        int x=que.front().x;
        int y=que.front().y;
        int step=que.front().step;
        que.pop();
        for (int i=0;i<4;i++){
            int newX=x+dx[i];
            int newY=y+dy[i];
            if (newX>=1 && newX<=h && newY>=1 && newY<=w && book[newX][newY]==0 && a[newX][newY]!=a[x][y]){
                book[newX][newY]=1;
                c={newX,newY,step+1};
                que.push(c);
                if (newX==h && newY==w){
                    printf("%lld",step+1);
                    return 0;
                }
            }
        }
    }
    printf("-1");
    return 0;
}