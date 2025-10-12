#include <iostream>
#include <vector>
#include <random>
#include <unordered_set>

using namespace std;

#define int long long

// 生成随机数据
vector<pair<int, int>> generate_random_data(int n, int m) {
    vector<pair<int, int>> friends;
    unordered_set<int> used;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, n);

    // 随机生成朋友关系
    for (int i = 0; i < m; ++i) {
        int a, b;
        do {
            a = dis(gen);
            b = dis(gen);
        } while (a == b || used.count(a * n + b) || used.count(b * n + a));
        
        used.insert(a * n + b);
        friends.emplace_back(a, b);
    }

    return friends;
}

signed main() {
    for (int i = 10; i <= 10; ++ i) {
        string file_name = "sns" + to_string(i) + ".in";
        freopen(file_name.c_str(), "w", stdout);
        int n = 200000, m = min(200000ll, n * (n - 1) / 2);

        printf("%lld %lld\n", n, m);

        vector<pair<int, int>> friends = generate_random_data(n, m);

        for (auto& f : friends) {
            cout << f.first << " " << f.second << endl;
        }

        fclose(stdout);
    }
    return 0;
}
