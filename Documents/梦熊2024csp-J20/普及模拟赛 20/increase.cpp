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
�ҵ��������е�һ��1
�����1�����ҵ���һ��2
�����2�����ҵ���һ��3
*/
