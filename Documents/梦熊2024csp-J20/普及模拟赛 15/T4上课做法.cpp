#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll m, k;
const ll biao = 2e5 + 10, biao2 = 1e5 + 10, mod = 1e9 + 7;
ll f[biao], s[biao], pre[biao2][26];
string str;
priority_queue<ll, vector<ll>, greater<ll> > q;

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    cin >> m >> k >> str;

    if (m <= 1 && k <= 1) {
        cout << str.size() + m;
        return 0;
    }

    str = "0" + str;
    for (ll i = 0; i < 26; i++) pre[1][i] = 0;

    for (ll i = 2; i <= str.size(); i++) {
        for (ll j = 0; j < 26; j++) pre[i][j] = pre[i - 1][j];
        pre[i][str[i - 1] - 'a'] = i - 1;
    }

    f[0] = 1;

    for (ll i = 1; i < str.size(); i++) {
        if (!pre[i][str[i] - 'a'])
            f[i] = f[i - 1] * 2;
        else
            f[i] = (f[i - 1] * 2 - f[pre[i][str[i] - 'a'] - 1] + mod) % mod;
        //	cout<<pre[i][str[i]-'a']<<endl;
    }

    //	for(ll i=1;i<str.size();i++) cout<<f[i]<<endl;
    //	cout<<endl;

    for (ll i = 0; i < k; i++) q.push(pre[str.size()][i]);
    for (ll i = str.size(); i < str.size() + m; i++) {
        ll t = q.top();
        q.pop();
        q.push(i);
        if (!t)
            f[i] = f[i - 1] * 2 % mod;
        else
            f[i] = (f[i - 1] * 2 - f[t - 1] + mod) % mod;
    }

    //	for(ll i=1;i<str.size()+m;i++) cout<<f[i]<<" ";

    cout << f[str.size() - 1 + m];

    return 0;
}
