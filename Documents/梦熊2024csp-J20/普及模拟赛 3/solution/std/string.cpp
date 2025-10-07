#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define inf 1e9
#define pii pair <int, int>
const int mod = 998244353;
inline void write (int x) {
	if (x < 0) x = -x, putchar ('-');
	if (x >= 10) write (x / 10);
	putchar (x % 10 + '0');
}
inline void Add(int &x, int y) {
	x += y;
	if(x >= mod) x -= mod;
}
int n, Ans;
char ch[5005];
int f[5005][27][27];
signed main () {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	scanf("%lld", &n);
	scanf("%s", ch + 1);
	f[0][0][0] = 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= 26; j++) {
			if(ch[i] != '?' && ch[i] - 'a' + 1 != j) continue;
			for(int j2 = 0; j2 <= 26; j2++) {
				for(int j1 = 0; j1 <= 26; j1++) {
					if(j == j1 || j == j2) continue;
					Add(f[i][j1][j], f[i-1][j2][j1]);
				}
			}
		}
	}
	for(int j2 = 0; j2 <= 26; j2++) {
		for(int j1 = 0; j1 <= 26; j1++) {
			Add(Ans, f[n][j2][j1]);
		}
	}
	write(Ans), putchar('\n');
	return 0;
}
/*
*/
