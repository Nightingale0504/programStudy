#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ub upper_bound
signed main() {
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> s;
    s.push_back(1LL);
    for (int i = 2; i <= 1e6; i++) {
        __int128 x = i * i;
        while (x <= n) {
            s.push_back(x);
            x *= i;
        }
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int ans = s.size(), half = sqrt(n);
    if (half > 1e6) {
        ans += half - 1e6;
        auto r = ub(s.begin(), s.end(), half) - s.begin();
        auto l = ub(s.begin(), s.end(), 1e6) - s.begin();
        ans -= r - l;
    }
    cout << ans << endl;
}
/*
最终一个数可以表示成a^b
1. 1特判掉 
2. a至少是2,2^b<=n  b至多为60 
3. 一个朴素的想法
对于一个b而言，有多少个可能的解 
是n的b次根号-1
把所有n的b次根号-1的答案相加
一个数可能会被算多次

2^6=64  -> 6才是真正的b 
4^3
8^2 
怎么去做一个去重的操作
每一个数可能都有很多种a^b的表述方法
那我不妨只取它b最大的那一个 
2^12 12是合法解，其他都不是合法解 
4^6
8^4
16^3
64^2
一个数字x，在可以表示的a^b当中
我们记录最大的那个数b为bmax
这个数x会在bmax的所有因数中被计算 
g[i]表示bmax=i的个数在[2,n]中有多少个 
f[i]=n开i次根号-1有多少个数b=i时是一个合法的值 
bmax=8
2,4,8
bmax=12
2,3,4,6,12


f[2]=g[2]+g[4]+g[6]+g[8]+g[10]+...+g[60]
f[3]=g[3]+g[6]+g[9]+g[12]+...+g[60]
f[4]=g[4]+g[8]+g[12]+g[16]+...+g[60]
f[k]=g[k]+g[2k]+g[3k]+g[4k]+...
我们知道f的值，我们要求出g的值
answer=g[2]+g[3]+g[4]+...+g[60]
从大到小看每个数
f[60]=g[60]
f[59]=g[59]
f[58]=g[58]
...
f[31]=g[31]
f[30]=g[30]+g[60]
f[29]=g[29]+g[58]
f[2]=g[2]+g[4]+g[6]+...g[60]
g[2]+g[3]+g[4]+...+g[60]
二分+快速幂
mid^x <=n
找到最大的一个mid,这个mid就是n开x次根号
二分范围不能过大，如果过大可能会爆long long
l=1,r=pow(1e18,1.0/x);
 
*/
