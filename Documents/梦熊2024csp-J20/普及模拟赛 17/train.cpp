#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
int ans = 0;
int up = 2;
int main() {
    freopen("train.in", "r", stdin);
    freopen("train.out", "w", stdout);
    scanf("%d", &n);
    a[0] = -114514;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        if ((up == 2 || up == 1) && a[i] == a[i - 1] + 1)
            up = 1;
        else if ((up == 2 || up == 0) && a[i] == a[i - 1] - 1)
            up = 0;
        else {
            ans++;
            up = 2;
        }
    }
    cout << ans - 1;
    return 0;
}
/*


*/
