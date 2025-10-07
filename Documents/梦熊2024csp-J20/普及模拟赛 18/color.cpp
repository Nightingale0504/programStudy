#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
#define in inline
#define get getchar()

int read() {
    int x = 1, t = 0;
    char ch = get;
    while ((ch < '0' || ch > '9') && ch != '-') ch = get;
    if (ch == '-')
        x = -1, ch = get;
    while (ch <= '9' && ch >= '0') t = t * 10 + ch - '0', ch = get;
    return t * x;
}
const int _ = 1e5 + 23;
int n, m, k, q;

struct yzx {
    int opt, u, c;
} a[_];
int l[_], h[_], ans[_];

int main() {
    freopen("color.in", "r", stdin);
    freopen("color.out", "w", stdout);
    n = read(), m = read(), k = read(), q = read();
    for (int i = 1; i <= q; ++i) a[i].opt = read(), a[i].u = read(), a[i].c = read();
    for (int i = q; i >= 1; i--) {
        int u = a[i].u, c = a[i].c;
        if (a[i].opt) {
            if (l[u])
                continue;
            ans[c] += n;
            m--;
            l[u] = 1;
        } else {
            if (h[u])
                continue;
            ans[c] += m;
            n--;
            h[u] = 1;
        }
        //		cout << i << endl;
    }
    for (int i = 1; i <= k; ++i) printf("%d ", ans[i]);
    return 0;
}
/*
ÿһ�У�����ֻ�������һ��Ⱦɫ����һʱ��
ÿһ�У�����ֻ�������һ��Ⱦɫ����һʱ�� 
�������ǣ����ſ���������
ÿ����ɫֻ�е�һ�α�Ⱦɫ��ʱ�����������
������ 

һ��ʼ��һ��ͼ
1.ɾ��ͼ�е�һ����
2.����һ����u����u�ڵ����ڵ���ͨ���С 

ɾ�߲��������ӱߺ���
�����������������ͱ����
1.����һ����
2.����һ����u����u���ڵ���ͨ���С
���鼯���� 

ÿ��Ⱦһ�У������Ѿ���x�б�Ⱦ�ˣ���ô��
��Ⱦm-x������
ÿ��Ⱦһ�У������Ѿ���x�б�Ⱦ�ˣ���ô��
��Ⱦn-x������
O(n+m+q)



*/
