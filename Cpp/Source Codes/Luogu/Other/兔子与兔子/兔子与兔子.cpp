// 字符串哈希: 把不同的字符串映射成不同的整数
// 哈希函数: 用于比较两个字符串是否相等
// 将 hash 值一样，但原字符串一样 -> 哈希碰撞
// base=13331 / 798, 开 unsigned long long
// 求字符串哈希 -> 前缀和
// 区间哈希: hash[L ~ R]=hash[R]-hash[L-1]*base^(R-L+1)
#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,tmp1,tmp2;
int m,l1,r1,l2,r2;
signed main(){
    cin>>s;
    scanf("%lld",&m);
    while (m--){
        scanf("%lld%lld%lld%lld",&l1,&r1,&l2,&r2);
        tmp1=s.substr(l1,r1-l1+1);
        tmp2=s.substr(l2,r2-l2+1);
        if (tmp1==tmp2){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}