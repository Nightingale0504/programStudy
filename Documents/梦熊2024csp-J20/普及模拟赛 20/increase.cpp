#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("increase.in", "r", stdin);
    freopen("increase.out", "w", stdout);
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int x;
        scanf("%d", &x);
        if (ans + 1 == x)
            ans++;
    }
    cout << ans << endl;
}
/*
找到整个序列第一个1
在这个1后面找到第一个2
在这个2后面找到第一个3
*/
