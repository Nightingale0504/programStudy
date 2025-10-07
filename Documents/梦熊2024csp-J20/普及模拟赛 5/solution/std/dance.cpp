#include <cstdio>
#include <iostream>
using namespace std;
int main() {
//	freopen("dance.in", "r", stdin);
//	freopen("dance.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    if(n%2==1) cout<<(1 + (n + 1) / 2) * (n + 1)<<endl;
    else cout<<(n / 2 + 1) * (n / 2 + 1)<<endl;
    return 0;
}
//搜索的一个角度去处理
//f[i][j][k][0/1]表示目前走到了(i,j)这个点，一共走了k步，并且下一步走左右(0)还是上下(1)
//f[i][j][k][0]->f[i+1][j][k+1][1] ,f[i-1][j][k+1][1]
//f[i][j][k][1]->f[i][j+1][k+1][1] ,f[i][j-1][k+1][1]
//直接写不一定能通过，先把所有答案跑出来，存在本地，然后一个个输出
//应试技巧
//n是偶数
//每一次奇数步走上下，偶数步走左右
//奇数步走左右，偶数步走上下 
//走了一个(±1,±1)一个对角线 
//(n/2+1)*(n/2+1) 
//n是奇数
//(1+(n+1)/2)*(n+1)
