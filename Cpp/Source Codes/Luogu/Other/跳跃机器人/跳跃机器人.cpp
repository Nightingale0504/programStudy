#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e6+5;
struct node{
    int x,step;
};
int n;
int a[maxN];
queue<node> que;
signed main(){
    scanf("%lld",&n);
    node t={1,0};
    que.push(t);
    a[1]=1;
    while (!que.empty()){
        int x=que.front().x;
        int step=que.front().step;
        int dx[3]={-1,1,x};
        que.pop();
        for (int i=0;i<3;i++){
            int newX=x+dx[i];
            if (newX<1 || newX>n){
                continue;
            }
            if (!a[newX]){
                t={newX,step+1};
                que.push(t);
                a[newX]=1;
                if (newX==n){
                    printf("%lld",step+1);
                    return 0;
                }
            }
        }
    }
    return 0;
}