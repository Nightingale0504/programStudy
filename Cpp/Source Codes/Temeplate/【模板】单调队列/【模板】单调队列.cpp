// 区间 RMQ 问题 -> 区间最值查询问题
// R: Range, M: Maximum/Minimum, Q: Query

// 数据固定
// 单调队列 -> 一次询问
// ST 表 -> 多次询问

// 数据实时改变
// 线段树

#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x,t;
deque<int> que;
signed main(){
    // 单调队列
    // 双端队列 deque 实现
    // 区间最值位于队首
    // 时间复杂度: O(n)

    // 双端队列
    que.push_front(x); // 队首入队
    que.push_back(x); //队尾入队
    que.pop_back(); //队尾出队
    que.pop_front(); //队首出队

    // 单调递增 (FREQ: L)
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>t;
        while (!que.empty() && t<=que.back()){
            que.pop_back();
        }
        que.push_back(t);
    }
    return 0;
}
