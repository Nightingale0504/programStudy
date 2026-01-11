#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5,maxM=2e5+5;
int n,m,a,b,v[maxN],book[maxN],ans,cnt;
struct node{
    int to,w;
}e[maxM];
inline void add(int x,int y,int w){
    e[++cnt].to=y;
    e[cnt].w=w;
}
signed main(){
    scanf("%lld%lld%lld%lld",&n,&m,&a,&b);
    for (int i=1;i<=n;i++){
        scanf("%lld",&v[i]);
    }
    for (int i=1;i<=m;i++){
        int x,y,w;
        scanf("%lld%lld",&x,&y);
        if (v[x]>v[y]){
            w=v[x]-v[y]-1;
        }else{
            w=-(v[y]-v[x]+1);
        }
        add(x,y,w);
    }

    return 0;
}