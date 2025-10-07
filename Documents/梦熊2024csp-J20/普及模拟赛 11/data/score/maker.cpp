#include <bits/stdc++.h>
using i64 = long long;
#define pb push_back
using namespace std;
//using std::cin, std::cout, std::string, std::vector;
int read(int x = 0, int f = 0, char ch = getchar()) {
    while (ch < 48 or 57 < ch) f = ch == 45, ch = getchar();
    while(48 <= ch and ch <= 57) x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}

signed main() {


    for (int i = 7; i <= 10; i++) {
        string in = "score" + std::to_string(i) + ".in";
        string out = "score" + std::to_string(i) + ".out";
        cout << in << '\n';
        
        string t = "./gen > " + in;
        system(t.c_str());
        t = "./sol < " + in + " > " + out;
        system(t.c_str());
    }

    return 0;
}
