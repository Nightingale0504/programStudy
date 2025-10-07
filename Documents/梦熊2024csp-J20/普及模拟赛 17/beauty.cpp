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
���ֵ�����С������һ���� 
��һλ�϶����С����(1~9)
a1,a2,a3,...,a9����һ����>0��ô����������С���Ǹ�
3��2,1��1,1��4
21242 
12242
12422
14222
12224
����ôȷ����һλ����������Щ����
��һλ���������Ժ�
ʣ�µ�������������һ������취��������λ����ͬ
�����Ǹ���
2x2x2 
2x2x
��������Ǹ������ֵĴ���������(�������е�λ��+1)/2 

��С����ö�������������x������a[x]>0
�ر�أ���һλֻ��1~9 
x����Ҫ���㲻�ܺ�ǰһλ��ͬ
��x�����Ժ�ʣ�µ�����
���ֶ���Ǹ������ֵĴ������ܳ���(�������е�λ��+1)/2 
������x�Ժ󣬳��ִ���������������Ȼ��x
��ôx���ܳ��� (�������е�λ��)/2 

*/
