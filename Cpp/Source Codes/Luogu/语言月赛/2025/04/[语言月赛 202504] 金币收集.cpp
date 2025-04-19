#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int maxM=1e5+5,maxN=1005;
int n,x,m;
int mv[maxM],award[maxN][maxN],t[maxN],mt[maxN];
int ans;
signed main(){
    scanf("%lld%lld%lld",&n,&x,&m);
    for (int i=1;i<=m;i++){
        scanf("%lld",&mv[i]);
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&t[i]);
        for (int j=1;j<=t[i];j++){
            scanf("%lld",&award[i][j]);
        }
    }
    mt[x]++;
    if (mt[x]<=t[x]) {
        ans+=award[x][mt[x]];
    }
    for (int i=1;i<=m;i++){
        if (mv[i]==1){
            if (x==n){
                x=1;
            }else{
                x++;
            }
        }else if (mv[i]==2){
            if (x==1){
                x=n;
            }else{
                x--;
            }
        }
        mt[x]++;
        if (mt[x]<=t[x]){
            ans+=award[x][mt[x]];
    	}
    }
    printf("%lld",ans);
    return 0;
}
