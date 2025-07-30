#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=25;
int n,b;
int h[maxN],book[maxN];
int ans=INT_MAX;
inline void dfs(int x){
    if (x>=b){
        ans=min(ans,x);
        return;
    }
    for (int i=1;i<=n;i++){
        if (book[i]==0){
            book[i]=1;
            dfs(x+h[i]);
            book[i]=0;
        }
    }
}
signed main(){
    scanf("%lld%lld",&n,&b);
    for (int i=1;i<=n;i++){
        scanf("%lld",&h[i]);
    }
    dfs(0);
    printf("%lld",ans-b);
    return 0;
}