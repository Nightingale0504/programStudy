#include <bits/stdc++.h>
using i64 = long long;
#define int i64
#define pb push_back
using namespace std;
int read(int x = 0, int f = 0, char ch = getchar()) {
    while (ch < 48 or 57 < ch) f = ch == 45, ch = getchar();
    while(48 <= ch and ch <= 57) x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}
void solve() {
	int n = read(), ans = 0;
	for (int i = 2; i <= n; i ++) {
		int k = n / i;
		for (int j = 1; j <= k; j++) {
			int t = i * j;
			if ((t ^ (t - j)) == j) {
				ans++;
			}
		}
	}
	cout << ans << '\n';
}

signed main() {
    // for (int T = read(); T--; solve());
    solve();
    return 0;
}
/*
gcd(a,b)=(a^b)=c
gcd(a,b)=c
c一定是a的一个因子 
判定是否存在一个b,满足gcd(a,b)=(a^b)=c 
gcd(a,a^c)=c?
c的一个因子a
a=c,2c,3c,4c,5c,....,(n/c)*c
对于一个固定的c,a一共有n/c种取法 
n(lnn)*logn nsqrt(n) 
复杂度是多少? 
(n/1+n/2+n/3+n/4+n/5+....n/n)*logn
n*ln n < nlogn

n/1 n/1
n/2 n/1
n/3,n/4 (n/2)*2
n/5,n/6,n/7,n/8 (n/4)*4
n/9,n/10,n/11,n/12,n/13,n/14,n/15,n/16 < (n/8)*8=n
<nlogn 

nlogn*logn  可以通过60这一档分
a>b
gcd(a,b)=c
gcd(a,a-b)=c<=a-b

(a^b)>=a-b
a-b>=gcd(a,b)

如果(a^b)=gcd(a,b)
(a^b)>=a-b>=gcd(a,b)
a-b=(a^b)=c

c=a-b
(a^b)=gcd(a,b)
a^b=a-b
00 0  0
01 1  -1
10 1  1
11 0  0


*/

