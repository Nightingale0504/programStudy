#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 110;
int a[N], n, x;
int dp[N][N][N];
signed main() {
    freopen("potion.in", "r", stdin);
    freopen("potion.out", "w", stdout);
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int Ans = x;
    for (int s = 1; s <= n; s++) {
        memset(dp, -1, sizeof dp);
        dp[0][0][0] = 0;
        for (int i = 1; i <= n; i++) {
            dp[i][0][0] = 0;
            for (int j = 1; j <= s; j++)
                for (int k = 0; k < s; k++) {
                    dp[i][j][k] = dp[i - 1][j][k];
                    if (dp[i - 1][j - 1][(k + s - (a[i] % s)) % s] != -1)
                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][((k - a[i]) % s + s) % s] + a[i]);
                }
        }
        if (dp[n][s][x % s] != -1)
            Ans = min(Ans, (x - dp[n][s][x % s]) / s);
    }
    cout << Ans;
    return 0;
}
