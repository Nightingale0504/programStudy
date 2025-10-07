#include <bits/stdc++.h>
using i64 = long long;
#define pb push_back
using namespace std; 
//using std::cin, std::cout, std::string, std::vector;
int read(int x = 0, int f = 0, char ch = getchar()) {
    while (ch < 48 or 57 < ch) f = ch == 45, ch = getchar();
    while(48 <= ch and ch <= 57) x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}

void solve() {
    std::mt19937 rng(std::random_device{}());
    int n = rng() % 1000000 + 1;
    cout << n << '\n';
    for (int i = 1; i <= n; i++) {
        int x = rng() % 50000;
        cout << x << ' ';
    }
}

signed main() {
	freopen("score7.in","w",stdout),solve();
	freopen("score8.in","w",stdout),solve();
	freopen("score9.in","w",stdout),solve();
	freopen("score10.in","w",stdout),solve();
    return 0;
}
