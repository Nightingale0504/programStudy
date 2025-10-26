#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    /* bitset
        1. 定义
            (1) bitset<n> a;                    -> 无参构造, 长度为 n, 默认每一位为 0
            (2) bitset<n> a(b); / bitset<n> a=b;-> 有参构造( 参数为数字 ), 将数字 b 转化为二进制保存, 前面用 0 补充
            (3) bitset<n> a(s);                 -> 有参构造( 参数为字符串 ), 将字符串 s 转化为二进制保存, 前面用 0 补充
            ! n必须是常数 !
        2. 性质
            ! bitset 下标为反向遍历 !
            * bitset 支持位运算 *
        3. 方法
            (1) a.to_ulong();   -> 把 a 中同样的二进制返回一个 unsigned long 值
            (2) a.to_string();  -> 把 a 中同样的二进制返回一个 string 值
            (3) a.any();        -> a 中是否存在置为 1 的二进制位, 有返回 true
            (4) a.none();       -> a 中是否没有 1, 没有返回 true
            (5) a.count();      -> a 中为 1 的个数
            (6) a.size();       -> a 中二进制位的个数
            (7) a.test(pos);    -> 测试 a 在 pos 位置是否为1, 是返回 true
            (8) a[pos];         -> 返回 a 在 pos 处的二进制位
            (9) a.set();        -> 把 a 中所有位都置为 1
            (10) a.set(pos);    -> 把 a 中 pos 位置置为 1
            (11) a.reset();     -> 把 a 中所有位都置为 0
            (12) a.reset(pos);  -> 把 a 中 pos 位置置为 0
            (13) a.flip();      -> 把 a 中所有二进制位取反
            (14) a.flip(pos);   -> 把 a 中 pos 位置取反
    */
    return 0;
}