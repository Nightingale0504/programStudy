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
每条边是完全独立的
假设第i条边经过了ki次
ki*a[i]    ki*c[i]+b[i]
min(ki*a[i],ki*c[i]+b[i])
差分的一个问题
经过连续的一段区间,经过连续的一段边
区间+1 求解每个单点的权值
[l,r]   
差分的角度
a[l],a[l+1],a[l+2],...,a[r]
a[l]-a[l-1],a[l+1]-a[l],a[l+2]-a[l+1],...,a[r]-a[r-1],a[r+1]-a[r]
a[l]+1,a[l+1]+1,a[l+2]+1,...,a[r]+1
给一个区间+1
那么差分数组只会改两项
第l项的差分数组+1,第r+1项的差分数组-1
a[l]-a[l-1]+1,a[l+1]-a[l],a[l+2]-a[l+1],...,a[r]-a[r-1],a[r+1]-a[r]-1
维护差分数组，每次修改差分数组的复杂度是O(1)
通过差分数组还原出原数组，计算出ki 

 



*/
