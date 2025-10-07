#include <bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int, int>
using namespace std;
int read() {
    int sum = 0, f = 1;
    char st = getchar();
    while (st < '0' || st > '9') {
        if (st == '-')
            f = -1;
        st = getchar();
    }
    while ('0' <= st && st <= '9') {
        sum = (sum << 3) + (sum << 1) + st - '0';
        st = getchar();
    }
    return sum * f;
}
const int maxn = 1000010;
int a[20];
int main() {
    freopen("beauty.in", "r", stdin);
    freopen("beauty.out", "w", stdout);
    int T = read();
    while (T--) {
        int su = 0, ma = 0;
        for (int i = 0; i < 10; ++i) {
            a[i] = read(), su += a[i];
            if (a[i] > a[ma])
                ma = i;
        }
        if (a[ma] * 2 - (ma != 0) > su) {
            puts("-1");
            continue;
        }
        int pr = 0;
        for (int i = 1; i <= su; ++i) {
            int ma = 0, mi = -1;
            for (int j = 0; j <= 9; ++j) {
                if (j != pr && a[j] && mi == -1)
                    mi = j;
                if (a[j] > a[ma])
                    ma = j;
            }
            if (a[ma] * 2 - 1 >= (su - i + 1)) {
                printf("%d", ma);
                --a[ma], pr = ma;
            } else {
                printf("%d", mi);
                --a[mi], pr = mi;
            }
        }
        puts("");
    }
    return 0;
}
/*
找字典序最小的这样一个数 
第一位肯定填尽量小的数(1~9)
a1,a2,a3,...,a9中哪一个数>0那么我们填入最小的那个
3个2,1个1,1个4
21242 
12242
12422
14222
12224
我怎么确定第一位可以填入哪些数？
第一位的数填完以后
剩下的所有数，存在一种填入办法，任意两位不相同
最多的那个数
2x2x2 
2x2x
如果最多的那个数出现的次数超过了(整个序列的位置+1)/2 

从小到大枚举所有能填的数x，满足a[x]>0
特别地，第一位只能1~9 
x首先要满足不能和前一位相同
把x填入以后，剩下的数中
出现多的那个数出现的次数不能超过(整个序列的位置+1)/2 
当填入x以后，出现次数最多的数假设仍然是x
那么x不能超过 (整个序列的位置)/2 

*/
