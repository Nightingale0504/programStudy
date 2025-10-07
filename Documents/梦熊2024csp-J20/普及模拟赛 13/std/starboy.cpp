#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define ins insert
#define pb push_back
#define flu fflush(stdout)
#define pii std::pair<int, int>
using std::map;
using std::priority_queue;
using std::queue;
using std::set;
using std::stack;
using std::string;
using std::swap;
using std::unordered_map;
using std::unordered_set;
using std::vector;
int read(int x = 0, bool f = 0, char ch = getchar())
{
    while (ch < 48 or ch > 57)
        f = ch == 45, ch = getchar();
    while (48 <= ch and ch <= 57)
        x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}
int pow(int x, int k, int P, int res = 1)
{
    for (; k; k >>= 1, x = x * x % P)
        if (k & 1)
            res = res * x % P;
    return res;
}

const int D = 1e5 + 5;
const int P = 998244353;

int k, d[5], w;
int dis[5][D];
bool vis[5][D];
vector<pii> g[5];
struct Node
{
    int cur, dis, r;
    bool friend operator<(Node a, Node b) { return a.dis > b.dis; }
};

void dijk()
{
    memset(vis, 0, sizeof vis);
    memset(dis, 0x3f, sizeof dis);
    priority_queue<Node> Q;
    Q.push({2, 0, 0}), dis[2][0] = 0;
    for (int u, r; !Q.empty();)
    {
        u = Q.top().cur, r = Q.top().r, Q.pop();
        if (vis[u][r])
            continue;
        vis[u][r] = 1;
        for (auto V : g[u])
        {
            int v = V.fi, nr = (r + V.se) % w, dist = V.se;
            if (dis[v][nr] > dis[u][r] + dist)
            {
                dis[v][nr] = dis[u][r] + dist;
                Q.push({v, dis[v][nr], nr});
            }
        }
    }
}

void solve()
{
    k = read();
    for (int i = 1; i <= 4; i++)
        d[i] = read(), g[i].clear();
    for (int i = 1; i <= 4; i++)
        g[i].pb({i % 4 + 1, d[i]}), g[i % 4 + 1].pb({i, d[i]});
    w = 2 * std::min(d[1], d[2]), dijk();
    int ans = LLONG_MAX;
    for (int i = 0; i <= w; i++)
        if (dis[2][i] > k)
            ans = std::min(ans, dis[2][i]);
        else
        {
            int res = (k - dis[2][i]) / w * w + dis[2][i];
            if ((k - dis[2][i]) % w)
                res += w;
            ans = std::min(ans, res);
        }
    printf("%lld\n", ans);
}

signed main()
{
	freopen("starboy.in","r",stdin);
	freopen("starboy.out","w",stdout);
    solve();
    return 0;
}
/*
从2点出发

最终回到2号点

走过的边权之和>=k

问 走过的边权之和最小能是多少
引导我们走d的角度思考
如果图中存在一条边权之和为c的路径
(2,3,4,1,2,3,4,2,3,2)
(2,1,2) 
(2,3,2)

(2,3,4,1,2,3,4,2,3,2)
(2,1,2,3,4,1,2,3,4,2,3,2)
(2,1,2,1,2,3,4,1,2,3,4,2,3,2)
(2,1,2,1,2,1,2,3,4,1,2,3,4,2,3,2)
(2,1)(1,2)  c+2d1,2
c+2kd1,2
引导我们从(2*d1,2)的角度讨论问题
所有权值之和为c的路径中，假设
c对 (2d1,2) 取模的结果为k0的情况下，最短的一条是c
c,c+2*d1,2,c+4*d1,2,c+6*d1,2,c+8*d1,
(2d1,2)=14
算出来所有长度模14余数为1的路径中，假设最短的一条是29
29,29+14,29+28,29+14*3,29+14*4,29+14*5..... 
对于每个模(2d1,2)余数0,1,2...,2d1,2-1
c % (2d1,2) 恰好是这个余数
 
f[1,2,3,4][0,1,2,3,....2*d1,2-1]
f[i][j]表示从2号点走到i号点，模 2*d1,2余数为j的所有路径中
最短的一条的长度是多少

f[i][j]现在在i号点
比如说我在1号点
(1,2)
f[1][j]+d1,2 -> f[2][(j+d1,2)%(2d1,2)]
(1,4)
f[1][j]+d1,4 -> f[4][(j+d1,4)%(2d1,2)]
DP的一个思路
(1,2) f[1][j]+d1,2-> f[2][(j+d1,2)%(2d1,2)] 
(2,3) f[2][j]+d2,3-> f[3][(j+d2,3)%(2d1,2)]
(3,4) f[3][j]+d3,4-> f[4][(j+d3,4)%(2d1,2)]
只讲了怎么转移
DP是有后效性的 最优化 
棘手的问题，不知道转移的顺序
转成图论问题 
(i,j) 一个点 f[i][j]  
f[1][j] -> f[2][(j+d1,2)%(2d1,2)] 
有一条边权为d1,2的边 
f[2][0]这个点出发,跑最短路

f[2][j]<k
f[2][j]+2*d1,2 * p>=k
 



*/

