#include <bits/stdc++.h>
using namespace std;
int ma = 0;
int ind = 0;
struct rua {
    int x;
    int y;
    int zhi;
} a[10000005];
bool cmp(rua a, rua b) { return a.zhi > b.zhi; }
int main() {
    freopen("up.in", "r", stdin);
    freopen("up.out", "w", stdout);
    int r, c;
    cin >> r >> c;
    int dp[c + 5][r + 5];
    int mk[c + 5][r + 5];
    for (int i = 0; i < r + 5; i++) {
        for (int j = 0; j < c + 5; j++) {
            dp[j][i] = 0;
            mk[j][i] = 0;
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            ind++;
            cin >> a[ind].zhi;
            a[ind].x = j;
            a[ind].y = i;
            mk[j][i] = a[ind].zhi;
        }
    }
    sort(a + 1, a + r * c + 1, cmp);
    for (int i = 1; i <= r * c; i++) {
        if (mk[a[i].x + 1][a[i].y] > a[i].zhi)
            dp[a[i].x][a[i].y] = max(dp[a[i].x + 1][a[i].y], dp[a[i].x][a[i].y]);
        if (mk[a[i].x - 1][a[i].y] > a[i].zhi)
            dp[a[i].x][a[i].y] = max(dp[a[i].x - 1][a[i].y], dp[a[i].x][a[i].y]);
        if (mk[a[i].x][a[i].y + 1] > a[i].zhi)
            dp[a[i].x][a[i].y] = max(dp[a[i].x][a[i].y + 1], dp[a[i].x][a[i].y]);
        if (mk[a[i].x][a[i].y - 1] > a[i].zhi)
            dp[a[i].x][a[i].y] = max(dp[a[i].x][a[i].y - 1], dp[a[i].x][a[i].y]);
        dp[a[i].x][a[i].y] += 1;
        ma = max(ma, dp[a[i].x][a[i].y]);
    }
    cout << ma;
    return 0;
}
/*
类似搜索的想法
f[i][j]表示走到(i,j)最长的路径可以是多长
(i,j) ->(i+1,j),(i-1,j),(i,j-1),(i,j+1)
DP的角度理解
后效性问题
在计算(i,j)之前所有(i-1,j),(i+1,j),(i,j-1),(i,j+1)这四个格子中 
数值比我小的都计算清楚了
if(h[i-1][j]<h[i][j]) f[i][j]=max(f[i][j],f[i-1][j]+1);
if(h[i][j-1]<h[i][j]) f[i][j]=max(f[i][j],f[i][j-1]+1);
if(h[i+1][j]<h[i][j]) f[i][j]=max(f[i][j],f[i+1][j]+1);
if(h[i][j+1]<h[i][j]) f[i][j]=max(f[i][j],f[i][j+1]+1);
把所有格子按照h从小到大一一计算即可
不用开二维数组
直接开一维数组
(i,j)  (i-1)*m+j 映射到一个n*m范围内的数  
开vector
vector f[N]; N 1e6
for(int i=0;i<=n+1;i++) f[i].resize(m+2);直接初始化为0
for(int i=0;i<=n+1;i++)
	for(int j=0;j<=m+1;j++) f[i][j]=0; 
[0,n+1][0,m+1] 

*/
