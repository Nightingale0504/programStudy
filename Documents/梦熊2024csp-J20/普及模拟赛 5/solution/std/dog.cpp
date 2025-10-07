#include <bits/stdc++.h>
using namespace std;
int T, n, x, d[105], h[105];
signed main() {
//     freopen("dog.in","r",stdin);
//     freopen("dog.out","w",stdout);
        scanf("%d%d", &n, &x);
        int maxn = 0, maxk = 0;
        for (int i = 1; i <= n; i++)
            scanf("%d%d", &d[i], &h[i]), maxn = max(maxn, d[i]), maxk = max(maxk, d[i] - h[i]);
        if (maxk <= 0) {
            if (maxn < x)
                puts("-1");
            else
                puts("1");
        } else {
            if (x <= maxn)
                puts("1");
            else {
                int num = ceil(1.0 * (x - maxn) / maxk);
                printf("%d\n", num + 1);
            }
        }
    return 0;
}
