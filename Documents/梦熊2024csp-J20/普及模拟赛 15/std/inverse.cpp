#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
const int mod = 1e9 + 7;
const int N = 3007;
int n, q, a[N], f[N][N], inv2;
inline int ksm(int a, int b, int mod) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod, b >>= 1;
    }
    return res;
}
signed main() {
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);
    inv2 = ksm(2ll, mod - 2, mod);
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) f[i][j] = (a[i] < a[j]);
    for (int i = 1; i <= q; i++) {
        int u, v;
        cin >> u >> v;
        for (int j = 1; j <= n; j++)
            if (j != u && j != v)
                f[u][j] = f[v][j] = (f[u][j] + f[v][j]) % mod * inv2 % mod;
        for (int j = 1; j <= n; j++)
            if (j != u && j != v)
                f[j][u] = f[j][v] = (f[j][u] + f[j][v]) % mod * inv2 % mod;
        f[u][v] = f[v][u] = (f[u][v] + f[v][u]) % mod * inv2 % mod;
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++) (res += f[i][j]) %= mod;
    cout << (res * ksm(2, q, mod) % mod + mod) % mod << "\n";
}
/*
for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
		if(a[i]>a[j]) dp[0][i][j]=1;

dp[x][i][j] 表示考虑好了前x个操作,满足a[i]>a[j]的方案数
假设第x+1次操作交换的是c,d两个位置
第x轮如果要操作交换c,d两个数 
A.i,j,c,d四个数两两不同  剩下的所有情况O(n^2) 
dp[x][i][j]*2->dp[x+1][i][j] 
B.(i,j)=(c,d)   1种可能 
dp[x][i][j]->dp[x+1][j][i]//换的情况
dp[x][i][j]->dp[x+1][i][j]//不换的情况 
C.i=c,但是j≠d 至多2n种可能 
dp[x][i][j]->dp[x+1][c][j]//换的情况
dp[x][i][j]->dp[x+1][i][j]//不换的情况
 
能不能把第一种转移进行优化
(2n+1)*m->可以接受 
dp[n][i][j] 相加 i<j 就可以了 
O(n^2m)

dp[n][i][j]

dp[n][i][j]*val

记一个标记val，表示所有数的权值为原权值*val 
val=val*2; O(1)
把B,C两类数乘上(p+1)/2 O(2n+1)


*/


