#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define REP(i, l, r) for (int i = l; i <= r; ++i)
#define PER(i, l, r) for (int i = l; i >= r; --i)
using namespace std;
namespace fast_IO{
//ʡ�Կ��
}using namespace fast_IO;
#define int __int128
const int N = 2e5 + 7;
const int inf = LONG_LONG_MAX;
namespace nogf {
    ll n; int m;
    inline bool qpow(int a, int b, int m) {
        int Res = 1;
        while (b) {
            if (b % 2 == 1) Res *= a;
            if (Res > m) return false;
            if (b > 1) {
                a *= a;
                if (a > m) return false;
            }
            b /= 2;
        }
        return true;
    }
    inline int solve(ll n, int m) {// 2 <= num <= n,m �� num ���Ա�ʾΪ a^b �� num ����
        int L = 2, R = __lg(n), Ans = 0;
        REP(num, L, R) {
            int l = 2, r = m, Res = 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (qpow(mid, num, m)) l = mid + 1, Res = mid;
                else r = mid - 1;
            } 
            Ans += Res - (Res <= 3 ? 0 : solve(Res, Res)) - 1; //�ݳ�
        } return Ans;
    }
    signed main() {
        ld >> n, m = n;
        jyt << solve(n, m) + 1 << '\n'; // Ҫ���� 1^b �ĸ���
        return 0;
    }
} 
signed main() {
    nogf::main();
    return 0;
}
