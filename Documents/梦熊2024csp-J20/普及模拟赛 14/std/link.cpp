#include <bits/stdc++.h>
using namespace std;
int i, j, k, m, n, x, y, z, cnt, p;
struct node
{
    int v, D, R;
} a[1100010];
int main()
{
    scanf("%d %d %d", &n, &m, &k);
    n++;
    m++;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
        {
            int v = (i - 1) * m + j;
            if (i > 1 && j > 1)
                scanf("%d", &a[v].v);
            if (i != n)
                a[v].D = v + m;
            if (j != m)
                a[v].R = v + 1;
        }
    while (k--)
    {
        int X1, Y1, X2, Y2, L, C, g1 = 1, g2 = 1, g3, g4;
        scanf("%d %d %d %d %d %d", &X1, &Y1, &X2, &Y2, &L, &C);
        while (--X1)
            g1 = a[g1].D;
        while (--X2)
            g2 = a[g2].D;
        while (--Y1)
            g1 = a[g1].R;
        while (--Y2)
            g2 = a[g2].R;
        g3 = g1;
        g4 = g2;
        for (i = 1; i <= L; i++)
            g1 = a[g1].D, g2 = a[g2].D, swap(a[g1].R, a[g2].R);
        for (i = 1; i <= C; i++)
            g1 = a[g1].R, g2 = a[g2].R, swap(a[g1].D, a[g2].D);
        for (i = 1; i <= C; i++)
            g3 = a[g3].R, g4 = a[g4].R, swap(a[g3].D, a[g4].D);
        for (i = 1; i <= L; i++)
            g3 = a[g3].D, g4 = a[g4].D, swap(a[g3].R, a[g4].R);
    }
    int pla = a[a[1].D].R;
    for (i = 1; i < n; i++, pla = a[pla].D)
    {
        for (int j = 1, d = pla; j < m; j++, d = a[d].R)
            printf("%d ", a[d].v);
        putchar('\n');
    }
    return 0;
}
