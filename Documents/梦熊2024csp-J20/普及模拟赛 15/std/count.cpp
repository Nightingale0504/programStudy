#include <bits/stdc++.h>
using i64 = long long;
#define int i64
#define pb push_back
using std::max, std::min;
using std::cin, std::cout, std::string, std::vector;
int read(int x = 0, int f = 0, char ch = getchar()) {
    while (ch < 48 or 57 < ch) f = ch == 45, ch = getchar();
    while(48 <= ch and ch <= 57) x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}
void solve() {
    int n = read();
    vector<int> a(n + 2);
    vector<int> f1(n + 1), f2(n + 1);
    for (int i = 1; i <= n; i++) a[i] = read();

    a[n + 1] = n + 1;

	vector<int> q;
	q.pb(n + 1);
	for (int i = n; i >= 1; i--) {
		while (!q.empty() and a[q.back()] <= a[i]) q.pop_back();
		f1[i] = q.back();
		q.pb(i);
	}
	q.clear();
	q.pb(n + 1);
	a[n + 1] = 0;
	for (int i = n; i >= 1; i--) {
		while (!q.empty() and a[q.back()] >= a[i]) q.pop_back();
		f2[i] = q.back();
		q.pb(i);
	}

	vector<int> s(n + 1);

	for (int i = 1; i <= n; i++) {
		for (int x = i, y = i; x <= n and y <= n; ) {
			int tmp = max(x, y);
			int dt = a[x] - a[y];

			if (f1[x] <= f2[y]) x = f1[x];
			else y = f2[y];

			s[dt] += max(x, y) - tmp;
		}
	}

	int ans = 0;
	for (int i = 1; i < n; i++) ans += s[i] * i;
	cout << ans << '\n';
}

signed main() {
    for (int T = read(); T--; solve());
    // solve();
    return 0;
}