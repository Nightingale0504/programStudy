#include <bits/stdc++.h>
#define ll long long
#define rep(i, x, y) for (int i = x; i <= y; ++i)
#define drep(i, x, y) for (int i = x; i >= y; --i)
#define pb push_back
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int N = 200050;
ll n, m, t, fr[N], c[N], dis[N], v[N], s[N], tot, len[N];
bool vis[N];
struct edge {
    ll v, w;
    friend bool operator<(edge x, edge y) { return x.w > y.w; }
};
vector<edge> G[N];
vector<int> E[N];
void Dj() {
    priority_queue<edge> q;
    q.push({ 1, 0 });
    memset(dis, 0x3f, sizeof dis);
    dis[1] = 0, fr[1] = 0;
    while (q.size()) {
        int u = q.top().v;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        s[++tot] = u;
        for (edge x : G[u]) {
            int v = x.v, w = x.w;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                fr[v] = u;
                q.push({ v, dis[v] });
            }
            if (dis[v] == dis[u] + w)
                fr[v] = min(fr[v], u * 1ll);
        }
    }
}
int main() {
    	freopen("meow.in", "r", stdin);
    	freopen("meow.out", "w", stdout);
    IOS;
    cin >> n >> m >> t;
    rep(i, 1, n) cin >> c[i];
    rep(i, 1, m) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].pb({ v, w }), G[v].pb({ u, w });
    }
    Dj();
    rep(i, 1, n) len[i] = c[i], E[fr[i]].pb(i);
    ll res = 0;
    drep(j, tot, 1) {
        int i = s[j];
        for (int u : E[i]) {
            len[i] += len[u];
        }
        res = max(res, len[i] * (dis[i] - t));
    }
    cout << res << '\n';
    return 0;
}
