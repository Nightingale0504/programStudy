#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int f[maxN],a[maxN];
int n,m,u,v,cnt=-1;
inline int find(int x){
    if (f[x]==x){
        return x;
    }else{
        return f[x]=find(f[x]);
    }
}
inline void merge(int x,int y){
    if (find(x)!=find(y)){
        f[find(y)]=find(x);
    }
    return;
}
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        f[i]=i;
    }
    for (int i=1;i<=m;i++){
        scanf("%lld%lld",&u,&v);
        merge(u,v);
    }
    for (int i=1;i<=n;i++){
        if (!a[find(i)]){
            cnt++;
            a[find(i)]=1;
        }
    }
    printf("%lld",cnt);
    return 0;
}