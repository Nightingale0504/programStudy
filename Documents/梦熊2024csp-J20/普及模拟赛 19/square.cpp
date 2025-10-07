#include <bits/stdc++.h>
using namespace std;
int x[2], y[2];
int main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    x[0] = 0, x[1] = 1e9;
    y[0] = 0, y[1] = 1e9;
    for (int i = 1; i <= 3; i++) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        x[0] = max(x[0], a);
        x[1] = min(x[1], c);
        y[0] = max(y[0], b);
        y[1] = min(y[1], d);
    }
    if (x[0] > x[1] || y[0] > y[1])
        cout << 0 << endl;
    else
        cout << 1ll * (y[1] - y[0]) * (x[1] - x[0]) << endl;
    return 0;
}
// 0 0 2 3
// 1 1 3 4
// 0 0 2 3
// 1 1 3 4
