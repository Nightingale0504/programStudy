#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,x,y,a[maxN],cnt,mmax=INT_MIN;
signed main(){
    scanf("%lld%lld%lld",&n,&x,&y);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for (int i=1;i<=n;i++){
        if (x+y==a[i] || x*y==a[i] || x+a[i]==y || x*a[i]==y || y+a[i]==x || y*a[i]==x){
            cnt++;
            mmax=max(mmax,a[i]);
        }
    }
    printf("%lld %lld",cnt,mmax);
    return 0;
}