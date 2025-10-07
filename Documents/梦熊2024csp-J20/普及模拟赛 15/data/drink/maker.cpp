#include <bits/stdc++.h>
using namespace std;

mt19937 myrand(time(NULL));
#define int long long

signed main() {
    for (int i = 8; i <= 8; ++i) {
        std::string filename = std::to_string(i) + ".in";
        std::ofstream file(filename);
        int n = myrand() % (1000000000000000000ll) + 10000000000000000ll;
        int k = myrand() % n + 1ll;
        file << n << " " << k << std::endl;
        file.close();
    }
    return 0;
}