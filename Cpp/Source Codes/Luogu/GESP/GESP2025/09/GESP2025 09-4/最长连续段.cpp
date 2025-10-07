#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,a[maxN],b[maxN];
int length=1,l=1,cnt;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++){
        if (i==1 || a[i]!=a[i-1]){
            b[++cnt]=a[i];
        }
    }
    for (int i=2;i<=cnt;i++){
        if (b[i]==b[i-1]+1){
            l++;
        }else{
            length=max(length,l);
            l=1;
        }
    }
    length=max(length,l);
    printf("%lld",length);
    return 0;
}