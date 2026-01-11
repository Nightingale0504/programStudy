#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5,maxM=2e5+5;
int n,m,a,b,v[maxN],x[maxM],y[maxM],ans,ans2;
queue<int> q;
signed main(){
    scanf("%lld%lld%lld%lld",&n,&m,&a,&b);
    for (int i=1;i<=n;i++){
        scanf("%lld",&v[i]);
        v[i]++;
    }
    for (int i=1;i<=m;i++){
        scanf("%lld%lld",&x[i],&y[i]);
        x[i]++;
        y[i]++;
    }
    q.push(a);
    while (!q.empty()){
        ans=0;
        int u=q.front();
        q.pop();
        for (int i=1;i<=m;i++){
            if (x[i]==u){
                if (v[u]>v[y[i]]){
                    ans-=v[u]-v[y[i]]-1;
                }else{
                    ans+=v[y[i]]-v[u]+1;
                }
                u=y[i];
                q.push(u);
            }
        }
        if (u==b){
            ans2=min(ans2,ans);
        }
    }
    if (ans2==INT_MAX){
        printf("No solution\n");
    }else{
        printf("%lld\n",ans2);
    }
    return 0;
}