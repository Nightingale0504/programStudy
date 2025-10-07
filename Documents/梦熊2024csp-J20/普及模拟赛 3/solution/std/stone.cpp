#include <bits/stdc++.h>
#define int long long
using namespace std;

int T, n, k, w[66];

signed main() {
    	freopen("stone.in", "r", stdin);
    	freopen("stone.out", "w", stdout);
        scanf("%lld", &n);
        for (int i = 0; i < n; i++) scanf("%lld", &w[i]);
        scanf("%lld", &k);
        if (!k) {
            puts("0");
            return 0;
        }
        int cnt(0), res(0);
        k--;
        while (k) {
            if (k & 1)
                res += w[cnt];
            k >>= 1;
            cnt++;
        }
        if (cnt > n)
            puts("-1");
        else
            printf("%lld\n", res);
    return 0;
}
