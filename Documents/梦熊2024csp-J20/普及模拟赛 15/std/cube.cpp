#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

int judge(int x) {
    int p[50] = {0};
    int m = 1;
    for ( ; x != 0; ++ m, x /= 10) p[m] = x % 10;
    -- m;
    for (int i = 1, j = m; i <= m / 2; ++ i, -- j) {
        if (p[i] != p[j]) {
            return 0;
        }
    }
    return 1;
}

signed main() {
//    freopen("cube.in", "r", stdin);
//    freopen("cube.out", "w", stdout);
//    n = read();
	cin>>n; 
    int ans = 0;
    for (int i = 0; i * i * i <= n; ++ i) {
        int x = i * i * i;
        if (judge(x)) {
            ans = x;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
