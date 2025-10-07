#include <bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int, int>
using namespace std;
struct node{
	int x;
};
operator < (node A,node B){
	return A.x<B.x;
}
int read() {
    int sum = 0, f = 1;
    char st = getchar();
    while (st < '0' || st > '9') {
        if (st == '-')
            f = -1;
        st = getchar();
    }
    while ('0' <= st && st <= '9') {
        sum = (sum << 3) + (sum << 1) + st - '0';
        st = getchar();
    }
    return sum * f;
}
const int maxn = 510;
int n, m, q;
int a[maxn][maxn];
int b[maxn][maxn], f[maxn];
int main() {
    freopen("skip.in", "r", stdin);
    freopen("skip.out", "w", stdout);
    cin >> n >> m >> q;
    memset(b, 0x3f, sizeof(b));
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= n; ++i) {
        int su = 0;
        for (int j = 1; j <= m; ++j) {
            a[i][j] = read();
            su += a[i][j];
        }
        b[i][su] = 0;
        for (int j = 1; j <= m; ++j) {
            int st = 0;
            for (int k = j; k <= m; ++k) {
                st += a[i][k];
                b[i][su - st] = min(b[i][su - st], k - j + 1);
            }
        }
        // cout<<"i="<<i<<endl;
        // for(int j=0;j<=n)
    }
    f[0] = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = q; j >= 0; --j) {
            f[j] = f[j] + b[i][0];
            for (int k = j - 1; k >= 0; --k) f[j] = min(f[j], f[k] + b[i][j - k]);
        }
    int ans = 1e9;
    for (int i = 0; i <= q; ++i) ans = min(ans, f[i]);
    cout << ans << endl;

    return 0;
}
/*
�����ı���
f[i][j]��ʾ��i��,����������j�ڿ�,��ô������
�ڵ�i�� ��Ҫ���ڽ�ѧ¥�೤��ʱ��
dp[i][j]��ǰ1~i��,һ������j�ڿ�
һ�����Դ��ڽ�ѧ¥���ٶ೤��ʱ��
�����Ѿ�֪��f[i][j],��ô��dp[i][j]
ö��ǰi-1��һ������k�ڿΣ���i������j��
dp[i-1][k]+f[i][j]->dp[i][k+j]
dp[i][k+j]=min(dp[i][k+j],dp[i-1][k]+f[i][j]);
O(n^3)

a[1],a[2],...,a[n]
sum[n]=a[n]
sum[n-1]=a[n-1]+a[n]
sum[n-2]=a[n-2]+a[n-1]+a[n]
sum[i]=sum[i+1]+a[i]

��ô��f[i][j]?
���ڽ�ѧ¥�����ʱ��һ����������һ��ʱ��
[l,r] 
ʱ��<=l-1�Ŀ���ȫ��Ҫ�̵�
ʱ��>=r+1�Ŀ���ȫ��Ҫ�̵�
a[1],a[2],...,a[l-1]���ж��ٸ�1
a[r+1],a[r+2],...a[m]���ж��ٸ�1
ǰ׺��/��׺�Ϳ������
���� a[1],a[2],...,a[l-1]+a[r+1],a[r+2],...a[m]
һ����L�ڿ�
f[i][L]=r-l+1 
 
ö������j�ڿ�,����̵�ʱ�� 
 

*/
