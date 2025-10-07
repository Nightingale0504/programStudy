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
�����������뷨
f[i][j]��ʾ�ߵ�(i,j)���·�������Ƕ೤
(i,j) ->(i+1,j),(i-1,j),(i,j-1),(i,j+1)
DP�ĽǶ����
��Ч������
�ڼ���(i,j)֮ǰ����(i-1,j),(i+1,j),(i,j-1),(i,j+1)���ĸ������� 
��ֵ����С�Ķ����������
if(h[i-1][j]<h[i][j]) f[i][j]=max(f[i][j],f[i-1][j]+1);
if(h[i][j-1]<h[i][j]) f[i][j]=max(f[i][j],f[i][j-1]+1);
if(h[i+1][j]<h[i][j]) f[i][j]=max(f[i][j],f[i+1][j]+1);
if(h[i][j+1]<h[i][j]) f[i][j]=max(f[i][j],f[i][j+1]+1);
�����и��Ӱ���h��С����һһ���㼴��
���ÿ���ά����
ֱ�ӿ�һά����
(i,j)  (i-1)*m+j ӳ�䵽һ��n*m��Χ�ڵ���  
��vector
vector f[N]; N 1e6
for(int i=0;i<=n+1;i++) f[i].resize(m+2);ֱ�ӳ�ʼ��Ϊ0
for(int i=0;i<=n+1;i++)
	for(int j=0;j<=m+1;j++) f[i][j]=0; 
[0,n+1][0,m+1] 

*/
