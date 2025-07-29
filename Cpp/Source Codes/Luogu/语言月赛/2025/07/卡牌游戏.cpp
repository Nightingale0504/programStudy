#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=2e3+5;
int n,k,pos=1;
int a[maxN];
int b[maxN],ans[maxN];
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for (int i=k+1;i<=n;i++){
        b[i-k]=a[i];
    }
    for (int i=1;i<=n;i++){
        if (i>k || i>n-k){
            break;
        }
        ans[pos++]=a[i];
        ans[pos++]=b[i];
    }
    if (n-k>k){
        for (int i=k+1;i<=n-k;i++){
            ans[pos++]=b[i];
        }
    }else{
        for (int i=n-k+1;i<=k;i++){
            ans[pos++]=a[i];
        }
    }
    for (int i=1;i<=pos-1;i++){
        printf("%lld ",ans[i]);
    }
    return 0;
}