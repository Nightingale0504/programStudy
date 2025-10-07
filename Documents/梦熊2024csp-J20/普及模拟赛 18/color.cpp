#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
#define in inline
#define get getchar()

int read() {
    int x = 1, t = 0;
    char ch = get;
    while ((ch < '0' || ch > '9') && ch != '-') ch = get;
    if (ch == '-')
        x = -1, ch = get;
    while (ch <= '9' && ch >= '0') t = t * 10 + ch - '0', ch = get;
    return t * x;
}
const int _ = 1e5 + 23;
int n, m, k, q;

struct yzx {
    int opt, u, c;
} a[_];
int l[_], h[_], ans[_];

int main() {
    freopen("color.in", "r", stdin);
    freopen("color.out", "w", stdout);
    n = read(), m = read(), k = read(), q = read();
    for (int i = 1; i <= q; ++i) a[i].opt = read(), a[i].u = read(), a[i].c = read();
    for (int i = q; i >= 1; i--) {
        int u = a[i].u, c = a[i].c;
        if (a[i].opt) {
            if (l[u])
                continue;
            ans[c] += n;
            m--;
            l[u] = 1;
        } else {
            if (h[u])
                continue;
            ans[c] += m;
            n--;
            h[u] = 1;
        }
        //		cout << i << endl;
    }
    for (int i = 1; i <= k; ++i) printf("%d ", ans[i]);
    return 0;
}
/*
每一行，我们只关心最后一次染色的那一时刻
每一列，我们只关心最后一次染色的那一时刻 
启发我们，倒着看整个操作
每个颜色只有第一次被染色的时候是有意义的
正难则反 

一开始有一个图
1.删掉图中的一条边
2.给定一个点u，问u节点所在的联通块大小 

删边不好做，加边好做
整个操作倒过来，就变成了
1.加入一条边
2.给定一个点u，问u所在的联通块大小
并查集处理 

每次染一行，假设已经有x列被染了，那么会
新染m-x个格子
每次染一列，假设已经有x行被染了，那么会
新染n-x个格子
O(n+m+q)



*/
