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
��2�����

���ջص�2�ŵ�

�߹��ı�Ȩ֮��>=k

�� �߹��ı�Ȩ֮����С���Ƕ���
����������d�ĽǶ�˼��
���ͼ�д���һ����Ȩ֮��Ϊc��·��
(2,3,4,1,2,3,4,2,3,2)
(2,1,2) 
(2,3,2)

(2,3,4,1,2,3,4,2,3,2)
(2,1,2,3,4,1,2,3,4,2,3,2)
(2,1,2,1,2,3,4,1,2,3,4,2,3,2)
(2,1,2,1,2,1,2,3,4,1,2,3,4,2,3,2)
(2,1)(1,2)  c+2d1,2
c+2kd1,2
�������Ǵ�(2*d1,2)�ĽǶ���������
����Ȩֵ֮��Ϊc��·���У�����
c�� (2d1,2) ȡģ�Ľ��Ϊk0������£���̵�һ����c
c,c+2*d1,2,c+4*d1,2,c+6*d1,2,c+8*d1,
(2d1,2)=14
��������г���ģ14����Ϊ1��·���У�������̵�һ����29
29,29+14,29+28,29+14*3,29+14*4,29+14*5..... 
����ÿ��ģ(2d1,2)����0,1,2...,2d1,2-1
c % (2d1,2) ǡ�����������
 
f[1,2,3,4][0,1,2,3,....2*d1,2-1]
f[i][j]��ʾ��2�ŵ��ߵ�i�ŵ㣬ģ 2*d1,2����Ϊj������·����
��̵�һ���ĳ����Ƕ���

f[i][j]������i�ŵ�
����˵����1�ŵ�
(1,2)
f[1][j]+d1,2 -> f[2][(j+d1,2)%(2d1,2)]
(1,4)
f[1][j]+d1,4 -> f[4][(j+d1,4)%(2d1,2)]
DP��һ��˼·
(1,2) f[1][j]+d1,2-> f[2][(j+d1,2)%(2d1,2)] 
(2,3) f[2][j]+d2,3-> f[3][(j+d2,3)%(2d1,2)]
(3,4) f[3][j]+d3,4-> f[4][(j+d3,4)%(2d1,2)]
ֻ������ôת��
DP���к�Ч�Ե� ���Ż� 
���ֵ����⣬��֪��ת�Ƶ�˳��
ת��ͼ������ 
(i,j) һ���� f[i][j]  
f[1][j] -> f[2][(j+d1,2)%(2d1,2)] 
��һ����ȨΪd1,2�ı� 
f[2][0]��������,�����·

f[2][j]<k
f[2][j]+2*d1,2 * p>=k
 



*/

