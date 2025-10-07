#include <bits/stdc++.h>
using i64 = long long;
#define int long long
#define pb push_back
using namespace std; 
//using std::cin, std::cout, std::string, std::vector;
int read(int x = 0, int f = 0, char ch = getchar()) {
    while (ch < 48 or 57 < ch) f = ch == 45, ch = getchar();
    while(48 <= ch and ch <= 57) x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}

const int N = 5e3 + 5;
const int P = 998244353;
int n, k;
int f[N][N];

void solve() {
    int n = read();
    int k = read();
    
    f[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j > i) break;
            else {        //对应2操作           对应1操作 
                f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % P;
            }
        }
    }
    cout << f[n][k] << '\n';
}
int C[1001][1001];
signed main() {
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout); 
    solve();
    return 0;
}
/*
把n拆成k个数，这k个数的和恰好为n，且每个数都>=0
(2,2,3) 和(2,3,2) 是一种情况
为了不重不漏地计算，强制要求所有数从大到小 
3,2,2
5,1,1
4,2,1
f[i][j][k] 表示前i个数已经填好了，且最后一个数填了j，它们的和为k
下一个数要填的权值一定在[1,j]以内 
x \in [1,j]
f[i][j][k]->f[i+1][x][k+x] O(n^4)
状态数减下来
换一种统计的方式
{}
1.把数列里所有数+1
2.在数列末尾添加一个数字1
4,2,1
2,1,1,2,1,2
1
2
3
3,1
4,2
4,2,1
f[i][j]现在这个数列有i个数且和为j
如果进行1操作f[i][j]->f[i][i+j] 
如果进行2操作f[i][j]->f[i+1][j+1] 
O(n^2)

n个数，拆成k个，每个数都>=1
n-1个空位中，插入k-1个板
C[n-1][k-1]

n个数，拆成k个，每个数都>=0
整体+1
n+k，拆成k个，每个数都>=1 
C[n+k-1][k-1]

C[n][m]=C[n-1][m-1]+C[n-1][m]
左边的式子:n个人选m个代表 
C[n-1][m-1]: 把第一个人选作代表，那么剩下的n-1个人里面还要选m-1个
C[n-1][m]:把第一个不选作代表，那么剩下的n-1个人里面还要选m个 
for(int i=0;i<=1000;i++){
	C[i][0]=1;
	for(int j=1;j<=i;j++){
		C[i][j]=(C[i-1][j-1]+C[i-1][j])%p;
	}
}
*/


