#include<bits/stdc++.h> 
#define LL long long
using namespace std;
int n,p,t1,t2,b[305][305],cnt[305],maxx,dis[305];
bool bol[305],vis[305];
vector<int>k[305],f[305];
struct node{
    int x,quan;
    node(int a,int b) : x(a),quan(b){
    }
    friend bool operator < (node a, node b){
        return a.quan>b.quan;
    }
};
int clean(int i){
    bol[i]=true;
    int num=1;
    int p=f[i].size();
    for (int j=0;j<p;j++){
        num+=clean(f[i][j]);
    }
    return num;
} 
void reclean(int i){
    bol[i]=false;
    int p=f[i].size();
    for (int j=0;j<p;j++){
        reclean(f[i][j]);
    }
} 
void dfs(int cen, int tot){
    maxx=max(maxx, tot);
    for (int i=0;i<cnt[cen];i++){
        if (!bol[b[cen][i]]){
            int num=clean(b[cen][i]);
            tot+=num;
            dfs(cen+1, tot);
            reclean(b[cen][i]);
            tot-=num;
        }
    }
} 
void resolve(int i,int cen){
    b[cen][cnt[cen]]=i;
    ++cnt[cen];
    int p=k[i].size();
    for (int j=0;j<p;j++){
        if (dis[k[i][j]]==dis[i]+1){
            resolve(k[i][j],cen+1);
            f[i].push_back(k[i][j]);
        }
    }
}
void solve(){
    priority_queue<node>que;
    for (int i=0; i<=n;i++){
        dis[i]=999;
    }
    dis[1]=0;
    que.push(node(1,0));
    while (!que.empty()){
        node temp=que.top();
        que.pop();
        int x=temp.x;
        int p=k[x].size();
        for (int j=0;j<p;j++){
            if (dis[k[x][j]]>dis[x]+1){
                dis[k[x][j]]=dis[x]+1;
                que.push(node(k[x][j],dis[k[x][j]]));
            }
        }
    }
    resolve(1,0);
} 
int main(){
    scanf("%d%d",&n,&p);
    for (int i=0;i<p;i++){
        scanf("%d%d",&t1,&t2);
        k[t1].push_back(t2);
        k[t2].push_back(t1);
    }
    solve();
    dfs(1,0);
    printf("%d",n-maxx);
}