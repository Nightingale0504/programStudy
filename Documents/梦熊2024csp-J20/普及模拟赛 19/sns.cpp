#include <bits/stdc++.h>

#define int long long

#define ikun 114514

using namespace std;

const int N = 2e5 + 5;

int n, m;
vector<int> G[N];
int scc_cnt, scc_num[N];
set<int> scc[N];
int edge_cnt[N];

inline void dfs(int u, int fa) {
    scc_num[u] = scc_cnt;
    scc[scc_cnt].insert(u);
    for (auto v : G[u]) {
        if (!scc_num[v]) {
            dfs(v, u);
        }
    }
}

inline void sol() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        if (!scc_num[i]) {
            scc_cnt++;
            dfs(i, 0);
        }
    }
    for (int u = 1; u <= n; u++) {
        for (auto v : G[u]) {
            if (scc_num[u] != scc_num[v])
                continue;
            edge_cnt[scc_num[u]]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= scc_cnt; i++) {
        ans += (int)scc[i].size() * ((int)scc[i].size() - 1) - edge_cnt[i];
    }
    cout << ans / 2 << "\n";
}

signed main() {
    freopen("sns.in", "r", stdin);
    freopen("sns.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // init();
    int T = 1;
    // cin >> T;
    while (T--) sol();
    return 0;
}
/*
有一张n个点m条边的图
每次可以选择三个点，使得(x,y),(y,z)在图中(x,z)不在图中
加入(x,z)这条边
问最终图中可以加入多少条边

如果x,y两个点它们是在原图中联通的，我一定能
找到一种方式，把x,y连起来
如果x,y两个点它们在原图中是不连通的，那么一定
不能找到一种方式，把它们连起来

对每个联通块计算出它的大小 
选出siz*(siz-1)/2个点对，使得它们之间的边最终在图中
每个联通块的 siz*(siz-1)/2 之和  - m 就是最终答案了 




*/
