#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,a[maxN],ans=1,c,mmax=INT_MIN; 
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    c=a[2]-a[1];
    for (int i=3;i<=n;i++){
        if (a[i]-a[i-1]==c){
            ans++;
        }else{
            c=a[i]-a[i-1];
            mmax=max(ans,mmax);
            ans=1;
        }
    }
    printf("%lld",mmax+1);
    return 0;
}