#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define ins insert
#define pb push_back
#define flu fflush(stdout)
#define pii std::pair<int, int>
using std::map;
using std::priority_queue;
using std::queue;
using std::set;
using std::stack;
using std::string;
using std::swap;
using std::unordered_map;
using std::unordered_set;
using std::vector;
int read(int x = 0, bool f = 0, char ch = getchar())
{
    while (ch < 48 or ch > 57)
        f = ch == 45, ch = getchar();
    while (48 <= ch and ch <= 57)
        x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}
int pow(int x, int k, int P, int res = 1)
{
    for (; k; k >>= 1, x = x * x % P)
        if (k & 1)
            res = res * x % P;
    return res;
}

const int N = 1e7 + 5;

int n, a[N], b[N];
vector<int> S;
int ans;

void judge(int x)
{
    int res = 0;
    memset(b,0,sizeof(b));
    for(int i=1;i<=n;i++) if(a[i]) b[++b[0]]=i;
    long long ans=0;
    for(int i=1;i<=b[0];i+=x){
    	int middle=b[i+x/2];
    	for(int j=0;j<x;j++){
    		ans+=(b[i+j]-middle);
		}
	}
}

void solve()
{
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
    n = read(), ans = LLONG_MAX;
    for (int i = 1; i <= n; i++)
        a[i] = read();
    if(n==1){
    	printf("0\n"); return;
	}
    int sum = std::accumulate(a + 1, a + 1 + n, 0LL);
    for (int i = 2; i * i <= sum; i++)
        if (sum % i == 0)
        {
            S.pb(i);
            while (sum % i == 0)
                sum /= i;
        }
    if (sum != 1)
        S.pb(sum);
    for (auto x : S)
        judge(x);
    printf("%lld\n", ans == LLONG_MAX ? -1 : ans);
}

signed main()
{
//	freopen("divide.in","r",stdin);
//	freopen("divide.out","w",stdout);
    solve();
    return 0;
}
