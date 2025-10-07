#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 110;
int n, m, i, j, a[N], b[N], f[N];
ll ans[N];
inline void cal(int A, int B)
{
  int i;
  for (i = 1; i <= n; i++)
    f[i] = abs(a[i] - A) + abs(b[i] - B);
  sort(f + 1, f + n + 1);
  ll t = 0;
  for (i = 1; i <= m; i++)
  {
    t += f[i];
    if (t < ans[i])
      ans[i] = t;
  }
}
int main()
{
  // freopen("base9.in", "r", stdin);
  // freopen("base.out", "w", stdout);
  scanf("%d%d", &n, &m);
  for (i = 1; i <= n; i++)
    scanf("%d%d", &a[i], &b[i]);
  for (i = 1; i <= m; i++)
    ans[i] = ~0ULL >> 1;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      cal(a[i], b[j]);
  for (i = 1; i <= m; i++)
    std::cout << ans[i] << '\n';
  return 0;
}