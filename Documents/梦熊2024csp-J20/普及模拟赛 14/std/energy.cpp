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
            else {        //��Ӧ2����           ��Ӧ1���� 
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
��n���k��������k�����ĺ�ǡ��Ϊn����ÿ������>=0
(2,2,3) ��(2,3,2) ��һ�����
Ϊ�˲��ز�©�ؼ��㣬ǿ��Ҫ���������Ӵ�С 
3,2,2
5,1,1
4,2,1
f[i][j][k] ��ʾǰi�����Ѿ�����ˣ������һ��������j�����ǵĺ�Ϊk
��һ����Ҫ���Ȩֵһ����[1,j]���� 
x \in [1,j]
f[i][j][k]->f[i+1][x][k+x] O(n^4)
״̬��������
��һ��ͳ�Ƶķ�ʽ
{}
1.��������������+1
2.������ĩβ���һ������1
4,2,1
2,1,1,2,1,2
1
2
3
3,1
4,2
4,2,1
f[i][j]�������������i�����Һ�Ϊj
�������1����f[i][j]->f[i][i+j] 
�������2����f[i][j]->f[i+1][j+1] 
O(n^2)

n���������k����ÿ������>=1
n-1����λ�У�����k-1����
C[n-1][k-1]

n���������k����ÿ������>=0
����+1
n+k�����k����ÿ������>=1 
C[n+k-1][k-1]

C[n][m]=C[n-1][m-1]+C[n-1][m]
��ߵ�ʽ��:n����ѡm������ 
C[n-1][m-1]: �ѵ�һ����ѡ��������ôʣ�µ�n-1�������滹Ҫѡm-1��
C[n-1][m]:�ѵ�һ����ѡ��������ôʣ�µ�n-1�������滹Ҫѡm�� 
for(int i=0;i<=1000;i++){
	C[i][0]=1;
	for(int j=1;j<=i;j++){
		C[i][j]=(C[i-1][j-1]+C[i-1][j])%p;
	}
}
*/


