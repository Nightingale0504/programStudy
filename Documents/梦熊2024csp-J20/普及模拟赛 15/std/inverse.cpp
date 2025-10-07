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

dp[x][i][j] ��ʾ���Ǻ���ǰx������,����a[i]>a[j]�ķ�����
�����x+1�β�����������c,d����λ��
��x�����Ҫ��������c,d������ 
A.i,j,c,d�ĸ���������ͬ  ʣ�µ��������O(n^2) 
dp[x][i][j]*2->dp[x+1][i][j] 
B.(i,j)=(c,d)   1�ֿ��� 
dp[x][i][j]->dp[x+1][j][i]//�������
dp[x][i][j]->dp[x+1][i][j]//��������� 
C.i=c,����j��d ����2n�ֿ��� 
dp[x][i][j]->dp[x+1][c][j]//�������
dp[x][i][j]->dp[x+1][i][j]//���������
 
�ܲ��ܰѵ�һ��ת�ƽ����Ż�
(2n+1)*m->���Խ��� 
dp[n][i][j] ��� i<j �Ϳ����� 
O(n^2m)

dp[n][i][j]

dp[n][i][j]*val

��һ�����val����ʾ��������ȨֵΪԭȨֵ*val 
val=val*2; O(1)
��B,C����������(p+1)/2 O(2n+1)


*/


