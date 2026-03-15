#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=3e4+5;
int a[maxN];
int n,cnt;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for (int i=2;i<=n;i++){
        int cnt1=0,cnt2=0;
        for (int j=1;j<i;j++){
            if (a[j]<a[i]){
                cnt1++;
            }
        }
        for (int j=i+1;j<=n;j++){
            if (a[j]>a[i]){
                cnt2++;
            }
        }
        cnt+=cnt1*cnt2;
    }
    printf("%lld\n",cnt);
    return 0;
}