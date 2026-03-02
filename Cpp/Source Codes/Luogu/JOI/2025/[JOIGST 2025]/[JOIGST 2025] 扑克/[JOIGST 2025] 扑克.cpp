#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=3e5+5;
int n,k,a[maxN],cnt;
signed main(){
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++){
        if (a[i-1]!=0 && a[i]==a[i-1]+1){
            cnt++;
            if (cnt==k){
                printf("Yes\n");
                return 0;
            }
        }else if (a[i]!=a[i-1]){
            cnt=1;
        }
    }
    printf("No\n");
    return 0;
}