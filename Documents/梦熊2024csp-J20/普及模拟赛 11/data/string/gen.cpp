#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#define mod 1e9 + 7
using namespace std;

int n, m, k, ans;
int f[27], last[27];
void add(int &a, int b)
{
	a += b;
	if (a >= mod)
		a -= mod;
}
int main()
{
	int i, j, old, x, t;
	char c;
	freopen("string16.in", "r", stdin);
	freopen("string16.out", "w", stdout);
	scanf("%d%d", &m, &k);
	getchar();
	ans = 1;
	while (true)
	{
		c = getchar();
		x = c - 'a' + 1;
		if (x < 1 || x > 26)
			break;
		old = ans;
		add(ans, ans);
		add(ans, mod - f[x]);
		f[x] = old;
		last[x] = ++n;
	}
	for (i = 1; i <= m; i++)
	{
		x = 0;
		for (j = 1; j <= k; j++)
			if (!x || last[x] > last[j])
				x = j;
		last[x] = ++n;
		old = ans;
		add(ans, ans);
		add(ans, mod - f[x]);
		f[x] = old;
	}
	printf("%d", ans);
	return 0;
}
