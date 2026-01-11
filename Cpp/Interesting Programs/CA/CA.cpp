#include <bits/stdc++.h>
using namespace std;

// 任意精度正整数, 大端在后, 基 10^9
struct BigInteger {
    static const uint32_t BASE=1000000000;
    vector<uint32_t> d;  // little‐endian: d[0] 最低位块

    BigInteger(uint64_t x=0) { 
        if (x == 0) return;
        while (x) {
            d.push_back(x % BASE);
            x /= BASE;
        }
    }

    void mul(uint64_t m) {
        uint64_t carry=0;
        for (size_t i=0; i < d.size(); ++i) {
            uint64_t cur=carry + uint64_t(d[i]) * m;
            d[i]=uint32_t(cur % BASE);
            carry=cur / BASE;
        }
        while (carry) {
            d.push_back(uint32_t(carry % BASE));
            carry /= BASE;
        }
    }

    void div(uint32_t v) {
        uint64_t carry=0;
        for (int i=int(d.size()) - 1; i >= 0; --i) {
            uint64_t cur=d[i] + carry * BASE;
            d[i]=uint32_t(cur / v);
            carry=cur % v;
        }
        while (!d.empty() && d.back() == 0)
            d.pop_back();
    }

    string toString() const {
        if (d.empty()) return "0";
        string s=to_string(d.back());
        char buf[16];
        for (int i=int(d.size()) - 2; i >= 0; --i) {
            snprintf(buf, sizeof(buf), "%09u", d[i]);
            s += buf;
        }
        return s;
    }
};

BigInteger combination(unsigned long long n, unsigned long long r) {
    if (r > n) return BigInteger(0);
    r=min(r, n - r);
    BigInteger res(1);
    for (unsigned long long i=1; i <= r; ++i) {
        res.mul(n - r + i);
        res.div(uint32_t(i));
    }
    return res;
}

BigInteger permutation(unsigned long long n, unsigned long long r) {
    BigInteger res(1);
    for (unsigned long long i=0; i < r; ++i) {
        res.mul(n - i);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    // 恢复 cin 与 cout 的绑定, 保证读输入前会刷新输出
    cin.tie(&cout);

    string line;
    while (getline(cin, line)) {
        string s;
        for (char c : line) if (!isspace(c)) s += c;
        if (s.empty()) continue;

        unsigned long long n=0, r=0;
        BigInteger ans;
        bool valid=true;

        if ((s[0]=='C' || s[0]=='A') && s.find('(')!=string::npos) {
            char type=s[0];
            auto p1=s.find('(');
            auto p2=s.find(',', p1);
            auto p3=s.find(')', p2);
            try {
                n=stoull(s.substr(p1+1, p2-p1-1));
                r=stoull(s.substr(p2+1, p3-p2-1));
            } catch(...) { valid=false; }
            if (valid) {
                ans=(type=='C' ? combination(n,r) : permutation(n,r));
            }
        }
        else {
            auto posC=s.find('C');
            auto posA=s.find('A');
            if (posC!=string::npos) {
                try {
                    n=stoull(s.substr(0,posC));
                    r=stoull(s.substr(posC+1));
                } catch(...) { valid=false; }
                if (valid) ans=combination(n,r);
            }
            else if (posA!=string::npos) {
                try {
                    n=stoull(s.substr(0,posA));
                    r=stoull(s.substr(posA+1));
                } catch(...) { valid=false; }
                if (valid) ans=permutation(n,r);
            }
            else valid=false;
        }

        if (!valid) {
            cout << line << "=Invalid format" << endl;
        } else {
            cout << line << "=" << ans.toString() << endl;
        }
    }
    return 0;
}
