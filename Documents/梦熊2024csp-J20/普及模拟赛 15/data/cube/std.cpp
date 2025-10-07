#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

namespace GTR {
	const int bufl = 1 << 15;
	char buf[bufl], *s = buf, *t = buf;
	inline int fetch() {
		if (s == t) { t = (s = buf) + fread(buf, 1, bufl, stdin); if (s == t) return EOF; }
		return *s++;
	}
	inline int read() {
		int a = 0, b = 1, c = fetch();
		while (c < 48 || c > 57) b ^= c == '-', c = fetch();
		while (c >= 48 && c <= 57) a = (a << 1) + (a << 3) + c - 48, c = fetch();
		return b ? a : -a;
	}
} using GTR::read;

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
    freopen("cube5.in", "r", stdin);
    freopen("cube5.out", "w", stdout);
    n = read();
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