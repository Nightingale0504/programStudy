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
cһ����a��һ������ 
�ж��Ƿ����һ��b,����gcd(a,b)=(a^b)=c 
gcd(a,a^c)=c?
c��һ������a
a=c,2c,3c,4c,5c,....,(n/c)*c
����һ���̶���c,aһ����n/c��ȡ�� 
n(lnn)*logn nsqrt(n) 
���Ӷ��Ƕ���? 
(n/1+n/2+n/3+n/4+n/5+....n/n)*logn
n*ln n < nlogn

n/1 n/1
n/2 n/1
n/3,n/4 (n/2)*2
n/5,n/6,n/7,n/8 (n/4)*4
n/9,n/10,n/11,n/12,n/13,n/14,n/15,n/16 < (n/8)*8=n
<nlogn 

nlogn*logn  ����ͨ��60��һ����
a>b
gcd(a,b)=c
gcd(a,a-b)=c<=a-b

(a^b)>=a-b
a-b>=gcd(a,b)

���(a^b)=gcd(a,b)
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

