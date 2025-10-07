#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <queue>
#include <stack>
#include <vector>
#include <random>
#include <cstring>
#include <ctime>
#include <cmath>
#include <assert.h>
#include <unordered_map>
using namespace std;
#define LL long long
#define pp pair<int, int>
#define mp make_pair
#define ull unsigned long long
int n, m;
vector<int> G[300005];
char s[300005];
const ull p = 13331;
unordered_map<ull, int> buc;
ull pw[300005], pre[300005], suf[300005];
int mx, pos1, pos2;
inline void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        scanf("%s", s + 1);
        G[i].clear();
        G[i].push_back(0);
        for (int j = 1; j <= m; j++) G[i].push_back(s[j] - '0');
    }
    int mx = 0, pos1 = 0, pos2 = 0;
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + G[i][j] * pw[i];
        suf[n + 1] = 0;
        for (int i = n; i >= 1; i--) suf[i] = suf[i + 1] + G[i][j] * pw[i];
        for (int i = 1; i <= n; i++) {
            ull val = pre[i - 1] + suf[i + 1] + (1 - G[i][j]) * pw[i];
            buc[val]++;
            if (buc[val] > mx) {
                mx = buc[val];
                pos1 = i, pos2 = j;
            }
        }
    }
    cout << mx << endl;
}
signed main() {
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    pw[0] = 1;
    for (int i = 1; i <= 300000; i++) pw[i] = pw[i - 1] * p;
    solve();
    return 0;
}
