#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
const int N = 5e5 + 50;
const int mod = 1e9 + 7;

int n, m;

struct fenwick {
    ll t[500050];
    ll n;
    int lowbit(int x) { return x & (-x); }
    void update(int x, ll v) {
        while (x <= n)
            t[x] += v, x += lowbit(x);
    }
    ll query(ll x) {
        ll ret = 0;
        while (x)
            ret += t[x], x -= lowbit(x);
        return ret;
    }
    ll query(int l, int r) {
        if (l > r)
            return 0;
        return query(r) - query(l - 1);
    }
    void clear() {
        fill(t, t + n + 5, 0);
    }
} t;

vector<int> e[N];
int tim[N];
vector<pii> q[N];
ll a[N];

void dfs(int u) {
    a[u] = 0;
    for (auto [ti, xi] : q[u])
        t.update(ti, xi);
    a[u] = t.query(tim[u], t.n);
    for (auto v : e[u])
        dfs(v);
    for (auto [ti, xi] : q[u])
        t.update(ti, -xi);
}

void solve() {
    int Q;
    cin >> Q;
    t.n = Q + 1;
    m = 1;
    tim[1] = 1;
    for (int i = 1; i <= Q + 5; i++)
        q[i].clear(), e[i].clear();
    for (int i = 2; i <= Q + 1; i++) {
        int ti, vi, xi;
        cin >> ti >> vi;
        if (ti == 1) {
            m++;
            e[vi].push_back(m);
            tim[m] = i;
        } else {
            cin >> xi;
            q[vi].push_back({i, xi});
        }
    }
    dfs(1);
    for (int i = 1; i <= m; i++)
        cout << a[i] << " \n"[i == m];
    t.clear();
}

int main() {
    freopen("growing.in", "r", stdin);
    freopen("growing.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}