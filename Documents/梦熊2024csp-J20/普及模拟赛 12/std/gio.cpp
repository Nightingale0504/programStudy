#include <cstdio>
#include <iostream>
using namespace std;
int n, m;
int pre, suf;
int main()
{
    // freopen("gio20.in", "r", stdin);
    // freopen("gio20.ans", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int p, i = 1; i <= n; i++)
    {
        scanf("%d", &p);
        pre += p - 1;
        suf += m - p;
    }
    printf("%d\n%d\n", max(1, m - suf), min(pre + 1, m));
    return 0;
}
