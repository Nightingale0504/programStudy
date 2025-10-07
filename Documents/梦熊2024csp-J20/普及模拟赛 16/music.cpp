#include <bits/stdc++.h>
using namespace std;
int num[500005];
int ans = 0;
int pre[500005];
int chu[500005];
int main() {
    freopen("music.in", "r", stdin);
    freopen("music.out", "w", stdout);
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%d", &num[i]);
    sort(num + 1, num + 1 + n);
    for (int i = 1; i <= n; i++) {
        int com = upper_bound(num + 1, num + 1 + n, num[i] + k) - num - i;
        pre[i] = com;
        chu[i] = com;
    }
    for (int i = n - 1; i >= 1; i--) pre[i] = max(pre[i], pre[i + 1]);
    for (int i = 1; i <= n; i++) {
        ans = max(ans, chu[i] + pre[i + chu[i]]);
    }
    cout << ans;
    return 0;
}
