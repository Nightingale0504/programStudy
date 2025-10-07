#include <bits/stdc++.h>
#define rep(x,y,z) for(ll x=(y);x<=(z);x++)
#define per(x,y,z) for(ll x=(y);x>=(z);x--)
#define debug(format...) fprintf(stderr, format)
#define fileIO(s) do{freopen(s".in","r",stdin);freopen(s".out","w",stdout);}while(false)
using namespace std;
typedef long long ll;

mt19937 rnd(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
ll randint(ll L, ll R) {
    uniform_int_distribution<ll> dist(L, R);
    return dist(rnd);
}

template<typename T> void chkmin(T& x, T y) {if(x > y) x = y;}
template<typename T> void chkmax(T& x, T y) {if(x < y) x = y;}

const ll N = 2e5+5, inf = numeric_limits<ll>::max();

ll T, n, a[N];

bool check(ll M) {
    ll x = a[1] + M, y = inf, z = inf;
    rep(i, 1, n) {
        if(abs(a[i] - x) <= M);
        else if(y == inf) y = a[i] + M;
        else if(abs(a[i] - y) <= M);
        else if(z == inf) z = a[i] + M;
        else if(abs(a[i] - z) <= M);
        else return false;
    }
    return true;
}

int main() {
	freopen("toy.in","r",stdin);
	freopen("toy.out","w",stdout);
    scanf("%lld", &n);
    rep(i, 1, n) scanf("%lld", &a[i]);
    sort(a+1, a+1+n);
    n = unique(a+1, a+1+n) - a - 1;
    if(n <= 3) {puts("0"); return 0;}
    ll L = 0, R = a[n] - a[1] + 1;
    while(L < R) {
        ll M = (L + R) >> 1;
        if(check(M)) R = M;
        else L = M + 1;
    }
    printf("%lld\n", L);
    return 0;
}
