#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=8e3+5;
int n,a[maxN],ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++){
        int l=1;
        int r=i-1;
        while (l<r){
            if (a[l]+a[r]>a[i]){
                ans+=r-l;
                r--;
            }else{
                l++;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}