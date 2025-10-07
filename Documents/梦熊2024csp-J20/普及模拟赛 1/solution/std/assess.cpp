#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, ans, sum;
signed main() {
     freopen("assess.in","r",stdin);
     freopen("assess.out","w",stdout);
    scanf("%lld", &n);
    for (int i = 1, a; i <= n; ++i) {
        scanf("%lld", &a);
        ans += (n - 1) * a * a - 2 * a * sum;
        sum += a;
    }
    printf("%lld\n", ans);
    return 0;
}
