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
���г���Ϊ��ͬԪ�صĸ���
�ֵ���->��С�� 
һ������λȷ��,̰�ĵĽǶ�ȷ�� 
��һλ����������
n,________ ����ȥ������һ���Ƿ����һ���õ����� 
n-1,________
n-2,________
n-2,1,________
n-2,2,________
n-2,3,________
n-2,3,n,________
n-2,3,n-1,______
���һ��ǰ׺����һ���Ƿ���һ����������ǰ׺�պ�������
n-2,3,n-1,______
�ҵ����������е�һ����СΪn-2��λ�ü�����i
Ȼ��������i��ʼ�����ҵ�һ����СΪ3��λ�ü�����j
Ȼ��������j��ʼ�����ҵ�һ����СΪn-1��λ�ü�����k
�������һ����ÿ��Ԫ�ػ�����ͬ��
[k+1,n] �ж�һ����������Ƿ���ʣ�µ���û��ѡ��Ԫ�� 

ÿһλ�Ҷ�Ҫ��1ö�ٵ�n���ߴ�nö�ٵ�1��λȷ��
ÿһλ��Ҫö��O(n)�Σ�Ȼ��һ����O(n)��λ
һ��Ҫ�ж�O(n^2) O(n)   ->O(n^3)


O(n^2)
STL
һ��ʼ������Ԫ�س��ֵ����һ��λ�ò��뵽 priority_queue
��û�г��ֹ����������һ��λ���ͷ����һ��
ȡ����λ�õ���Сֵ 
����ÿ���ҵ�priority_queue ����С��һ��Ԫ��x���λ�� 
�ж�һ��a[x]�Ƿ��Ѿ�����������ֹ���
������ֹ���˵��a[x]�Ѿ������ˣ�x�����ȶ�����ɾ������������һ��x
x�����ǰ����һ�� 

����Ԫ��
�ҵ����������ڵ����ֵ/��Сֵ
ɾ�����ֵ/��Сֵ 

ÿ�ζ���һ������[l,r]�е���Сֵ/���ֵ
l�˵�һֱ�����ƣ�r�˵�Ҳһֱ������
���ȶ���/��������O(n) STL O(nlogn)

���Ǽ��������û�г��ֹ����������һ��λ��
���뵽һ��priority_queue
�������ֻ��ɾ������������Ԫ�أ���������ֻ�����ǰ����һ��
ÿ�������ȶ��еĿ�ͷ��һ��Ԫ��x
���x����ֵ�Ѿ����ֹ��ˣ����ǾͰ�x�����������������Ԫ��
˵��x������û�г��ֹ����������һ��λ��
*/
