#include <cstdio>
#include <cstring>

const int L = 25000;

long long dividend[L], divisor[L], tmp[L];
char s[L];

void mult(long long *a, long long *b, int c)
{
    if (c == 0)
    {
        a[0] = 0;
        return;
    }
    memcpy(a, b, b[0] + 1 << 3);
    for (int i = 1; i <= a[0]; ++i)
        a[i] *= c;
    for (int i = 1; i < a[0]; ++i)
    {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    while (a[0] > 0 && a[a[0]] >= 10)
    {
        a[a[0] + 1] = a[a[0]] / 10;
        a[a[0]++] %= 10;
    }
}

int cmp(long long *a, long long *b)
{
    if (a[0] < b[0])
        return -1;
    if (a[0] > b[0])
        return 1;
    for (int i = a[0]; i >= 1; --i)
    {
        if (a[i] < b[i])
            return -1;
        if (a[i] > b[i])
            return 1;
    }
    return 0;
}

void init(long long *a)
{
    gets(s);
    a[0] = strlen(s);
    for (int i = a[0]; i >= 1; --i)
        a[i] = s[a[0] - i] - 48;
}

int main()
{
     freopen("energy.in", "r", stdin);
     freopen("energy.ans", "w", stdout);
    init(dividend);
    init(divisor);
    int l = 0, r = 2000000001;
    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        mult(tmp, divisor, mid);
        if (cmp(tmp, dividend) <= 0)
            l = mid;
        else
            r = mid;
    }
    printf("%d\n", l);
    fclose(stdout);
}
/*
f[1] 个位上的值[0,9]
f[2] 十位上的值[0,9]
f[3] 百位上的值[0,9]

f[] 存到数组里面 
*/

/*
高精度除法
大于等于<=2e9
把高精度除法-> 高精度乘法
A/B 的权值具体是多少 
A/B>=mid是否成立,找到一个最大的mid,这个mid肯定就是合法的
mid [0,2e9]
A>=mid*B
int*高精度
再和左边的A进行比较 


二分答案的范围继续扩大[0,10^{1000}]
二分答案的时候每一步也是高精度
A/B>=mid
mid -> 高精度乘法 

long double
double
存储一个很大的值的前若干位(比如64)位，以及它的最高位的权值 
98129382190381290389012839012839021839012830921890
98129382190381290389*10^{14}
0.0000000000012893021830921893210
12893021830*10^{-12}

*/
