#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=105;
int n,k,a[maxN],mmin=INT_MAX;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        if (a[i]==0){
            mmin=min(mmin,i);
        }
    }
    scanf("%lld",&k);
    if (a[k]==0){
        printf("%lld",k);
    }else{
        printf("%lld",mmin);
    }
    return 0;
}