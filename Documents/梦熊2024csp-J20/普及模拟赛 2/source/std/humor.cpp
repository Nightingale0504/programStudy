#include <bits/stdc++.h>
using namespace std;
namespace Kycida{
using ll = long long;
const int N = 114.5e4;
set <ll> myset , tmp , tmptmp;
int n , a[N];
ll lcm(ll x , ll j){return x * j / __gcd(x , j);}
int main()
{
    int T; cin >> T;
    while(T--) {
        cin >> n; myset.clear(); tmp.clear();
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = n; i > 0; i--) {
            tmptmp.clear(); tmptmp.insert(a[i]);
            for (auto j : tmp) {
                ll tt = lcm(j , a[i]);
                if (tt < 5e6) {
                    tmptmp.insert(tt);
                }
            }
            tmp.clear();
            for (auto j : tmptmp) {
                tmp.insert(j);
                myset.insert(j);
            }
        }
        int ans = 1;
        for (; myset.count(ans); ans++);
        cout << ans << '\n';
    }
    return 0;
}
}int main()
{
	freopen("humor.in","r",stdin);
	freopen("humor.out","w",stdout);
    ios :: sync_with_stdio(0);
    cin.tie(0) , cout.tie(0);
    return Kycida :: main();
}
