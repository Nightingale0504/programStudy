#include <bits/stdc++.h>
using namespace std;

int main(void) {
    freopen("distance.in", "r", stdin);
    freopen("distance.out", "w", stdout);
    int n, sz;
    long long x, y, ans = 0;
    vector<long long> a[4];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if ((x + y) % 2 == 0) {
            a[0].push_back(x + y);
            a[1].push_back(x - y);
//            |a[0][i]-a[0][j]| 
//            |a[1][i]-a[1][j]|
        } else {
            a[2].push_back(x + y);
            a[3].push_back(x - y);
//            |a[2][i]-a[2][j]|
//            |a[3][i]-a[3][j]|
        }
    }
    for (int i = 0; i < 4; i++) {
        sort(a[i].begin(), a[i].end());
        sz = a[i].size();
//        a[i][j] 作为负数 (sz-j-1)
//		a[i][j] 作为正数 (j)
//		((j)-(sz-j-1))*a[i][j] 
        for (int j = 0; j < sz; j++) ans += a[i][j] * (2 * j + 1 - sz);
    }
//    j
//    a[0][i]-a[0][j]
    
    cout << (ans / 2) << endl;
    return 0;
}
/*
什么时候A点跳不到B点 
奇偶性不同
(x,y) (a,b) (x+y)%2 和 (a+b)%2 不同时
说明两个点不能跳到彼此 

换系
找到两个不变量
(x,y) -> (x+y,x-y)
四项操作等价于
(x+1,y+1) -> (x+y+2,x-y)
(x-1,y+1) -> (x+y,x-y-2)
(x-1,y-1) -> (x+y-2,x-y)
(x+1,y-1) -> (x+y,x-y+2)
第一维+2,-2 或者第二维+2,-2 
(a,b) (x,y)
(A,B) (X,Y)
(|A-X|+|Y-B|)/2
把所有(a,b) (a+b)%2=1 的和(a+b)%2=0的一起做 
(A[i],B[i])
(|A[i]-A[j]| +|B[i]-B[j]|)/2
只要把所有A从小到大排序
A[j]-A[i]
把所有B从小到大排序
B[j]-B[i]
 
 

 


*/
