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
��һ��n����m���ߵ�ͼ
ÿ�ο���ѡ�������㣬ʹ��(x,y),(y,z)��ͼ��(x,z)����ͼ��
����(x,z)������
������ͼ�п��Լ����������

���x,y��������������ԭͼ����ͨ�ģ���һ����
�ҵ�һ�ַ�ʽ����x,y������
���x,y������������ԭͼ���ǲ���ͨ�ģ���ôһ��
�����ҵ�һ�ַ�ʽ��������������

��ÿ����ͨ���������Ĵ�С 
ѡ��siz*(siz-1)/2����ԣ�ʹ������֮��ı�������ͼ��
ÿ����ͨ��� siz*(siz-1)/2 ֮��  - m �������մ��� 




*/
