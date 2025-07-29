#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
const int maxN=1e5+5;
int n,x,y;
int a[maxN],b[maxN];
signed main(){
    scanf("%lld%lld%lld",&n,&x,&y);
    for (int i=1;i<=n;i++){
        scanf("%lld%lld",&a[i],&b[i]);
    }
    for (int i=1;i<=n;i++){
        if (x<a[i]){
            break;
        }
        x-=a[i];
        x+=b[i];
        if (x>=y){
            break;
        }        
    }
    printf("%lld",x);
    return 0;
}