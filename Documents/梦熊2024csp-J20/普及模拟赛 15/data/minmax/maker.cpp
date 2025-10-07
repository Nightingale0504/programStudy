#include <bits/stdc++.h>
using namespace std;

mt19937 myrand(time(0));

int main() {
    for (int i = 4; i <= 10; ++ i) {
        string file = "minmax" + to_string(i) + ".in";
        freopen(file.c_str(), "w", stdout);
        int n = 2e5;
        cout << n << endl;
        for (int i = 1; i <= n; ++ i) {
            cout << myrand() % 1000000 + 1 << " ";
        }
    }
    return 0;
}