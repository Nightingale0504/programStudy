#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,a[maxN],mmin=INT_MAX,ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++){
        int t=lower_bound(a+1,a+n+1,a[i])-a-1;
        if (abs(n-2*t)<mmin){
            mmin=abs(n-2*t);
            ans=a[i];
        }
        if (abs(n-2*t)==mmin){
            ans=a[i];
        }
    }
    printf("%lld",ans);
    return 0;
}