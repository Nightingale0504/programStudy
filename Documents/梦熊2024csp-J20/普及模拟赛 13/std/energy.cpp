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
f[1] ��λ�ϵ�ֵ[0,9]
f[2] ʮλ�ϵ�ֵ[0,9]
f[3] ��λ�ϵ�ֵ[0,9]

f[] �浽�������� 
*/

/*
�߾��ȳ���
���ڵ���<=2e9
�Ѹ߾��ȳ���-> �߾��ȳ˷�
A/B ��Ȩֵ�����Ƕ��� 
A/B>=mid�Ƿ����,�ҵ�һ������mid,���mid�϶����ǺϷ���
mid [0,2e9]
A>=mid*B
int*�߾���
�ٺ���ߵ�A���бȽ� 


���ִ𰸵ķ�Χ��������[0,10^{1000}]
���ִ𰸵�ʱ��ÿһ��Ҳ�Ǹ߾���
A/B>=mid
mid -> �߾��ȳ˷� 

long double
double
�洢һ���ܴ��ֵ��ǰ����λ(����64)λ���Լ��������λ��Ȩֵ 
98129382190381290389012839012839021839012830921890
98129382190381290389*10^{14}
0.0000000000012893021830921893210
12893021830*10^{-12}

*/
