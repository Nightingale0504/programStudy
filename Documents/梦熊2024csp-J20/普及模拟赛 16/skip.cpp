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
背包的变形
f[i][j]表示第i天,假设我翘了j节课,那么我最少
在第i天 需要呆在教学楼多长的时间
dp[i][j]在前1~i天,一共翘了j节课
一共可以呆在教学楼最少多长的时间
假设已经知道f[i][j],怎么求dp[i][j]
枚举前i-1天一共翘了k节课，第i天翘了j节
dp[i-1][k]+f[i][j]->dp[i][k+j]
dp[i][k+j]=min(dp[i][k+j],dp[i-1][k]+f[i][j]);
O(n^3)

a[1],a[2],...,a[n]
sum[n]=a[n]
sum[n-1]=a[n-1]+a[n]
sum[n-2]=a[n-2]+a[n-1]+a[n]
sum[i]=sum[i+1]+a[i]

怎么求f[i][j]?
呆在教学楼里面的时间一定是连续的一段时间
[l,r] 
时间<=l-1的课我全部要翘掉
时间>=r+1的课我全部要翘掉
a[1],a[2],...,a[l-1]中有多少个1
a[r+1],a[r+2],...a[m]中有多少个1
前缀和/后缀和快速求解
假设 a[1],a[2],...,a[l-1]+a[r+1],a[r+2],...a[m]
一共有L节课
f[i][L]=r-l+1 
 
枚举了有j节课,求最短的时间 
 

*/
