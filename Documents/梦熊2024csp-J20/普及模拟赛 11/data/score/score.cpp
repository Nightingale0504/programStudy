#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, ans;
int main()
{
	 freopen("score7.in", "r", stdin);
	 freopen("score7.out", "w", stdout);
	scanf("%lld", &n);
	for (ll i = 1; i <= n; i++)
	{
		scanf("%lld", &x);
		ans += x * i * (n - i + 1);
		ans %= 1000000007;
	}
	printf("%lld", ans);
	return 0;
}
