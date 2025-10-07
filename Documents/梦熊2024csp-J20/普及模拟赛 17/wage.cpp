#include <bits/stdc++.h>
using namespace std;
int c, l;
pair<int, int> person[1000005];
int money[1000005];
int ans = 0;
int point = 1;
multiset<int> st;
int main() {
    freopen("wage.in", "r", stdin);
    freopen("wage.out", "w", stdout);
    scanf("%d%d", &c, &l);
    for (int i = 1; i <= c; i++) scanf("%d%d", &person[i].first, &person[i].second);
    sort(person + 1, person + 1 + c);
    while (l--) {
        int a;
        scanf("%d", &a);
        money[a] += 1;
    }
    for (int i = 1; i <= 1000; i++) {
        while (person[point].first <= i && point <= c) st.insert(person[point++].second);
        while (st.size() && *st.begin() < i) st.erase(st.begin());
        for (int j = 1; j <= money[i]; j++) {
            if (st.empty())
                break;
            st.erase(st.begin());
            ans++;
        }
    }
    cout << ans;
    return 0;
}
