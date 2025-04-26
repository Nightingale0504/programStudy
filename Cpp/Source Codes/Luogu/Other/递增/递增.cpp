#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,a[maxN],lis[maxN],num;
int now=1,ans;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        lis[i]=1;
    }
    for (int i=1;i<=n;i++){
        if (a[i]>lis[now]){
            now++;
            lis[now]=a[i];
        }else{
            num=lower_bound(lis+1,lis+now+1,a[i])-lis;
            lis[num]=a[i];
            ans++;
        }
    }
    printf("%lld",ans);
    return 0;
}