#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,a[maxN],book[maxN];
int mmax=INT_MIN,mmin=INT_MAX;
int l,r,ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        mmax=max(mmax,a[i]);
        mmin=min(mmin,a[i]);
    }
    if (mmax<2*mmin){
        printf("0");
        return 0;
    }
    sort(a+1,a+n+1);
    l=n/2;
    r=n;
    while (l>0){
        if (a[r]<a[l]*2){
            l--;
        }else{
            ans++;
            book[l]=1;
            book[r]=1;
            l--;
            r--;
            while (r>0 && book[r]){
                r--;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}