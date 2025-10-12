#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 2e5+10;
int n,m;
// int h[maxn],e[maxn],ne[maxn],idx;
// void add(int x,int y){
//     e[++idx]=y,ne[idx]=h[x],h[x]=idx;
// }
int fa[maxn],sz[maxn],cnt[maxn];
int find(int x){
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
void mergE(int u,int v){
    int fu=find(u),fv=find(v);
    if(fu!=fv){
        fa[fu]=fv;
        sz[fv]+=sz[fu];
        cnt[fv]+=cnt[fu]+1;
    }else{
        cnt[fu]++;
    }
}
signed main(){
    freopen("sns10.in","r",stdin);
    freopen("sns10.out","w",stdout);
    cin>>n>>m;
    int a,b;
    for(int i=1;i<=n;i++){
        fa[i]=i;
        sz[i]=1;
    }
    int ans=0;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        mergE(a,b);
    }
    for(int i=1;i<=n;i++){
        if(find(i)==i){
            ans+=((sz[i]-1)*(sz[i])/2-cnt[i]);
        }
    }
    cout<<ans<<endl;
}