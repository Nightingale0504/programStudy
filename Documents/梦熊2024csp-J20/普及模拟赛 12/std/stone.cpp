#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#define mod 1000000007
using namespace std;

int t;
long long n, m;

long long pow(long long a, long long b)
{
	long long r = 1, base = a;
	while (b)
	{
		if (b & 1)
			r = r * base % mod;
		base = base * base % mod;
		b >>= 1;
	}
	return r;
}
long long solve()
{
	if (n == 1)
		return m;
	if (n == 2)
		return m % mod * (m - 1) % mod;
	if (n % 2)
		return (pow(m - 1, n) - (m - 1) + mod) % mod;
	return (pow(m - 1, n) + (m - 1)) % mod;
}

int main()
{
	int i, j;
	// freopen("stone10.in", "r", stdin);
	// freopen("stone10.ans", "w", stdout);
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld%lld", &n, &m);
		printf("%lld\n", solve());
	}
	return 0;
}
