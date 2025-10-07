#include <bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int, int>
using namespace std;
int read() {
    int sum = 0, f = 1;
    char st = getchar();
    while (st < '0' || st > '9') {
        if (st == '-')
            f = -1;
        st = getchar();
    }
    while ('0' <= st && st <= '9') {
        sum = (sum << 3) + (sum << 1) + st - '0';
        st = getchar();
    }
    return sum * f;
}
const int maxn = 1000010;
ll a[maxn];
int n;
bool paix(ll s1, ll s2) { return s1 > s2; }
int main() {
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
    cin >> n;
    ll su = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        su += a[i];
    }
    if (su < 0) {
        for (int i = 1; i <= n; ++i) a[i] = -a[i];
    }
    sort(a + 1, a + 1 + n, paix);
    ll A = 0, B = 0;
    for (int i = 1; i <= n; ++i) {
        if ((i % 2) == 1)
            A += a[i];
        else
            B += a[i];
    }
    cout << abs(A) - abs(B) << endl;
    return 0;
}
