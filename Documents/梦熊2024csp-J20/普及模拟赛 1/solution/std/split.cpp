#include <bits/stdc++.h>
using namespace std;
int main() {
     freopen("split.in","r",stdin);
     freopen("split.out","w",stdout);
    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        long long num = 0;
        while (n) {
            num += n % 3;
            n /= 3;
        }
        if (num > k)
            puts("No");
        else if ((k - num) % 2 == 0)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
