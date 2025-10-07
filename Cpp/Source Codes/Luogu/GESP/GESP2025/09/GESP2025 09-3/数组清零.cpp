#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=105;
int n;
int a[maxN];
int cnt;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    int now=1;
    while (true){
        stable_sort(a+1,a+n+1);
        if (a[n]==0){
            break;
        }
        while (a[now]==0){
            now++;
        }
        a[n]-=a[now];
        cnt++;
        if (now==n){
            break;
        }
    }
    printf("%lld",cnt);
    return 0;
}