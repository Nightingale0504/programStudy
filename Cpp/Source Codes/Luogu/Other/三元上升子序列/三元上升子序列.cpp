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
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            for (int k=1;k<=n;k++){
                if (a[i]<a[j] && a[j]<a[k]){
                    cnt++;
                }
            }
        }
    }
    printf("%lld\n",cnt);
    return 0;
}