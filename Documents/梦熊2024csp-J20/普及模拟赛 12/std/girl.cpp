#include <bits/stdc++.h>

using namespace std;
#define int64 long long
int n, max1, max2;
int tot1[110], tot2[110];
int tmp[110], tmp2[110];

void work()
{
	for (int i = 1; i <= max(max1, max2); i++)
		tmp[i] = tot1[i], tmp2[i] = tot2[i];
	int l = 0, r = max2, ans = 0;
	while (true)
	{
		while (tmp[l] == 0 && l <= max1)
			l++;
		if (l > max1)
			break;
		while (tmp2[r] == 0)
			r--;
		int minv = min(tmp[l], tmp2[r]);
		tmp[l] -= minv;
		tmp2[r] -= minv;
		ans = max(ans, l + r);
	}
	printf("%d\n", ans);
}

int main()
{
	// freopen("girl9.in", "r", stdin);
	// freopen("girl9.out", "w", stdout);
	cin >> n;
	int x, y;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y);
		tot1[x]++;
		tot2[y]++;
		max1 = max(max1, x);
		max2 = max(max2, y);
		work();
	}
}
