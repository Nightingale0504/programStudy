#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxK=1e3+5;
int n,k,q,x,y,a,b,ans;
int p[maxK],l[maxK],r[maxK];
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=k+1;i++){
        scanf("%lld",&p[i]);
    }
    for (int i=1;i<=k+1;i++){
        l[i]=p[i-1];
        r[i]=p[i]-1;
    }
    scanf("%lld",&q);
    while (q--){
        scanf("%lld%lld",&x,&y);
        if (x>y){
            swap(x,y);
        }
        if (x==y){
            printf("1\n");
            continue;
        }
        for (int i=1;i<=k+1;i++){
            if (l[i]<=x && x<=r[i]){
                a=i;
            }
            if (l[i]<=y && y<=r[i]){
                b=i;
            }
        }
        if (a==b){
            printf("2\n");
            continue;
        }
        ans=b-a-1;
        if (x==l[a]){
            ans++;
        }
        if (y==r[b]){
            ans++;
        }
        ans+=2;
        printf("%lld\n",ans);
    }
    return 0;
}