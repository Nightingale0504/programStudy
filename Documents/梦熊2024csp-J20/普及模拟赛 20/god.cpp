#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
#define in inline
const int _ = 1e6 + 23;
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

struct yzx {
    int x, id;
} a[1000100];
int n;

in int cmp(yzx a, yzx b) { return a.x < b.x; }

in int check(int u, int l, int r) {
    if (a[u].x - a[l].x > a[r].x - a[u].x)
        return 0;
    return 1;
}

int main() {
    freopen("god.in", "r", stdin);
    freopen("god.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; ++i)

    {
        a[i].x = read();
        a[i].id = i;
    }
    sort(a + 1, a + n + 1, cmp);
    int L = 1, R = n;
    //一开始的范围[1,n] 
    while (R - L > 1) {
        int l = L, r = R - 1, ans = l;
        while (l <= r) {
            int mid = l + r >> 1;
            if (check(mid, L, R))
                ans = mid, l = mid + 1;
            else
                r = mid - 1;
        }
        if (ans - L + 1 >= R - ans)
            R--;
        else
            L++;
    }
    cout << a[L].id << endl;
}
/*
把所有勇士从小到大排序
每次被淘汰的勇士，一定是能力值最大或最小的勇士 
每一轮而言，淘汰的究竟是能力值最小的勇士还是
能力值最大的勇士 

二分的手段判定划分点
O(logn) 判定第一轮淘汰的是最小还是最大
O(nlogn) 

*/
