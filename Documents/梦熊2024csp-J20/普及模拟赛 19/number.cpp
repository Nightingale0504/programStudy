#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ub upper_bound
signed main() {
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> s;
    s.push_back(1LL);
    for (int i = 2; i <= 1e6; i++) {
        __int128 x = i * i;
        while (x <= n) {
            s.push_back(x);
            x *= i;
        }
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int ans = s.size(), half = sqrt(n);
    if (half > 1e6) {
        ans += half - 1e6;
        auto r = ub(s.begin(), s.end(), half) - s.begin();
        auto l = ub(s.begin(), s.end(), 1e6) - s.begin();
        ans -= r - l;
    }
    cout << ans << endl;
}
/*
����һ�������Ա�ʾ��a^b
1. 1���е� 
2. a������2,2^b<=n  b����Ϊ60 
3. һ�����ص��뷨
����һ��b���ԣ��ж��ٸ����ܵĽ� 
��n��b�θ���-1
������n��b�θ���-1�Ĵ����
һ�������ܻᱻ����

2^6=64  -> 6����������b 
4^3
8^2 
��ôȥ��һ��ȥ�صĲ���
ÿһ�������ܶ��кܶ���a^b�ı�������
���Ҳ���ֻȡ��b������һ�� 
2^12 12�ǺϷ��⣬���������ǺϷ��� 
4^6
8^4
16^3
64^2
һ������x���ڿ��Ա�ʾ��a^b����
���Ǽ�¼�����Ǹ���bΪbmax
�����x����bmax�����������б����� 
g[i]��ʾbmax=i�ĸ�����[2,n]���ж��ٸ� 
f[i]=n��i�θ���-1�ж��ٸ���b=iʱ��һ���Ϸ���ֵ 
bmax=8
2,4,8
bmax=12
2,3,4,6,12


f[2]=g[2]+g[4]+g[6]+g[8]+g[10]+...+g[60]
f[3]=g[3]+g[6]+g[9]+g[12]+...+g[60]
f[4]=g[4]+g[8]+g[12]+g[16]+...+g[60]
f[k]=g[k]+g[2k]+g[3k]+g[4k]+...
����֪��f��ֵ������Ҫ���g��ֵ
answer=g[2]+g[3]+g[4]+...+g[60]
�Ӵ�С��ÿ����
f[60]=g[60]
f[59]=g[59]
f[58]=g[58]
...
f[31]=g[31]
f[30]=g[30]+g[60]
f[29]=g[29]+g[58]
f[2]=g[2]+g[4]+g[6]+...g[60]
g[2]+g[3]+g[4]+...+g[60]
����+������
mid^x <=n
�ҵ�����һ��mid,���mid����n��x�θ���
���ַ�Χ���ܹ������������ܻᱬlong long
l=1,r=pow(1e18,1.0/x);
 
*/
