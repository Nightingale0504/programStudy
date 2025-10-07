#include <bits/stdc++.h>
using namespace std;
string s, ans = "NOANSWER";
int n;
bool flag = true;
bool check(string x, string y) {
    if (x.size() > y.size())
        swap(x, y);
    int lenx = x.size(), leny = y.size();
    if (lenx == leny) {
        int cnt = 0;
        for (int i = 0; i < lenx; i++)
            if (x[i] != y[i])
                cnt++;
        return cnt <= 1;
    }
    if (lenx == leny - 1) {
        int p = 0;
        while (p < leny) {
            if (x[p] != y[p])
                break;
            p++;
        }
        int i = p, j = p + 1;
        while (i < lenx && j < leny) {
            if (x[i] != y[j])
                return false;
            i++;
            j++;
        }
        return true;
    }
    return false;
}
int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> s >> n;
    while (n--) {
        string x;
        cin >> x;
        if (s == x) {
            cout << x;
            return 0;
        }
        if (check(x, s) && flag == true) {
            ans = x;
            flag = false;
        }
    }
    cout << ans;
    return 0;
}
