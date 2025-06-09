#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e5+5;
int n,w[maxN],ans;
int l,r;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=2*n;i++){
        scanf("%lld",&w[i]);
    }
    sort(w+1,w+2*n+1);
    l=1;
    r=2*n;
    while (l<r){
        ans+=w[l]*w[r];
        l++;
        r--;
    }
    printf("%lld",ans);
    return 0;
}