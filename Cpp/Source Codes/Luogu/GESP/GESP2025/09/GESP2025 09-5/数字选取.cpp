#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,cnt=1;
bool isPrime[maxN];
signed main(){
    scanf("%lld",&n);
    for (int i=2;i<=n;i++){
        isPrime[i]=1;
    }
    for (int i=2;i<=n;i++){
        if (isPrime[i]){
            cnt++;
            for (int j=i*i;j<=n;j+=i){
                isPrime[j]=0;
            }
        }
    }
    printf("%lld",cnt);
    return 0;
}