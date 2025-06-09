#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,a[maxN],b[maxN],c[maxN],ans;
int l1,l2;
bool flag=true;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&b[i]);
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    l1=l2=ans=n;
    while (l2>0 && l1>0){
        if (a[l1]>b[l2]){
            l1--;
            l2--;
            ans--;
        }else{
            l2--;
        }
    }
    printf("%lld",ans);
    return 0;
}