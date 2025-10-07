#include <bits/stdc++.h>
using namespace std;
#define int long long
int cf[5000005];
int pr[5000005];
int ypr[5000005];
int y[5000005];
signed main() {
    freopen("global.in", "r", stdin);
    freopen("global.out", "w", stdout);
    int n, m;
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i < n; i++) {
        scanf("%lld%lld%lld", &pr[i], &ypr[i], &y[i]);
    }
    for (int i = 1; i <= m; i++) {
        int st, ed;
        scanf("%lld%lld", &st, &ed);
        if (st > ed)
            swap(st, ed);
        cf[st]++;
        cf[ed]--;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cf[i] += cf[i - 1];
        ans += min(pr[i] * cf[i], ypr[i] + y[i] * cf[i]);
    }
    cout << ans;
    return 0;
}
/*
ÿ��������ȫ������
�����i���߾�����ki��
ki*a[i]    ki*c[i]+b[i]
min(ki*a[i],ki*c[i]+b[i])
��ֵ�һ������
����������һ������,����������һ�α�
����+1 ���ÿ�������Ȩֵ
[l,r]   
��ֵĽǶ�
a[l],a[l+1],a[l+2],...,a[r]
a[l]-a[l-1],a[l+1]-a[l],a[l+2]-a[l+1],...,a[r]-a[r-1],a[r+1]-a[r]
a[l]+1,a[l+1]+1,a[l+2]+1,...,a[r]+1
��һ������+1
��ô�������ֻ�������
��l��Ĳ������+1,��r+1��Ĳ������-1
a[l]-a[l-1]+1,a[l+1]-a[l],a[l+2]-a[l+1],...,a[r]-a[r-1],a[r+1]-a[r]-1
ά��������飬ÿ���޸Ĳ������ĸ��Ӷ���O(1)
ͨ��������黹ԭ��ԭ���飬�����ki 

 



*/
