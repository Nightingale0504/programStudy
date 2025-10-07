#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("subsequence.in", "r", stdin);
    freopen("subsequence.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tt = 1;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
        }
        vector<int> l(n + 1, INT_MAX);
        for (int i = 0; i < n; i++) l[a[i]] = i;
        priority_queue<int, vector<int>, greater<int>> q(l.begin(), l.end());
        priority_queue<array<int, 2>, vector<array<int, 2>>, greater<array<int, 2>>> q1, q2;
        vector<bool> vis(n + 1, false);
        for (int i = 0; i <= q.top(); i++) {
            q1.push({ -a[i], i });
            q2.push({ a[i], i });
        }
        vector<int> ans;
        int i = 0;
        while (!q2.empty()) {
            auto t = (ans.size() % 2 == 0 ? q1.top() : q2.top());
            int x = t[0], pos = t[1];
            if (ans.size() % 2 == 0) {
                q1.pop();
                x *= -1;
            } else {
                q2.pop();
            }
            ans.emplace_back(x);
            i = pos + 1, vis[x] = true;
            while ((q.top() != INT_MAX) && vis[a[q.top()]]) {
                int j = q.top();
                q.pop();
                for (int k = j + 1; k <= min(q.top(), n - 1); k++) {
                    q1.push({ -a[k], k });
                    q2.push({ a[k], k });
                }
            }
            while (!q1.empty() && (vis[-q1.top()[0]] || q1.top()[1] < i)) q1.pop();
            while (!q2.empty() && (vis[q2.top()[0]] || q2.top()[1] < i)) q2.pop();
        }
        cout << ans.size() << '\n';
        for (auto x : ans) cout << x + 1 << ' ';
        cout << '\n';
    }
    return 0;
}
/*
序列长度为不同元素的个数
字典序->最小化 
一定是逐位确定,贪心的角度确定 
第一位填入最大的数
n,________ 我们去尝试找一找是否存在一个好的序列 
n-1,________
n-2,________
n-2,1,________
n-2,2,________
n-2,3,________
n-2,3,n,________
n-2,3,n-1,______
填出一个前缀，找一找是否有一个序列它的前缀刚好是这样
n-2,3,n-1,______
找到整个序列中第一个大小为n-2的位置假设是i
然后我们在i开始继续找第一个大小为3的位置假设是j
然后我们在j开始继续找第一个大小为n-1的位置假设是k
这个序列一定是每个元素互不相同的
[k+1,n] 判定一下这个区间是否有剩下的我没有选的元素 

每一位我都要从1枚举到n或者从n枚举到1逐位确定
每一位都要枚举O(n)次，然后一共有O(n)个位
一共要判定O(n^2) O(n)   ->O(n^3)


O(n^2)
STL
一开始把所有元素出现的最后一个位置插入到 priority_queue
有没有出现过的数的最后一个位置最开头的那一个
取所有位置的最小值 
我们每次找到priority_queue 里最小的一个元素x这个位置 
判定一下a[x]是否已经在序列里出现过了
如果出现过了说明a[x]已经出现了，x从优先队列里删除，继续找下一个x
x就是最靠前的那一个 

加入元素
找到整个集合内的最大值/最小值
删掉最大值/最小值 

每次都问一个区间[l,r]中的最小值/最大值
l端点一直在右移，r端点也一直在右移
优先队列/单调队列O(n) STL O(nlogn)

我们假设把所有没有出现过的数的最后一个位置
插入到一个priority_queue
这个队列只会删除，不会增加元素，并且我们只关心最靠前的那一个
每次找优先队列的开头的一个元素x
如果x的数值已经出现过了，我们就把x弹出继续找优先里的元素
说明x是所有没有出现过的数的最后一个位置
*/
