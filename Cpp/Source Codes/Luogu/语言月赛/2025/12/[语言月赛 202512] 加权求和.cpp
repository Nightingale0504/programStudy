#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,x[maxN],p[maxN],q;
double E,mu;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&x[i]);
    }
    for (int i=1;i<=n;i++){
        scanf("%lld",&p[i]);
        q+=p[i];
    }
    for (int i=1;i<=n;i++){
        E+=x[i]*p[i];
    }
    E/=q;
    for (int i=1;i<=n;i++){
        mu+=p[i]*(x[i]-E)*(x[i]-E);
    }
    mu/=q;
    printf("%lf\n%lf\n",E,mu);
    return 0;
}