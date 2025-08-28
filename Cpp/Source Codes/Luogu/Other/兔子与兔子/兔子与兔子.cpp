// 字符串哈希: 把不同的字符串映射成不同的整数
// 哈希函数: 用于比较两个字符串是否相等
// 将 hash 值一样, 但原字符串一样 -> 哈希碰撞
// base=13331, 开 unsigned long long(自动取余)
// 求字符串哈希 -> 前缀和
// 区间哈希: hash[L ~ R]=hash[R]-hash[L-1]*base^(R-L+1)
#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int maxN=1e6+5;
string s;
int m,l1,r1,l2,r2;
ull sum[maxN],pb[maxN];
inline ull hashing(int l,int r){
    return sum[r]-sum[l-1]*pb[r-l+1];
}
signed main(){
    cin>>s;
    s='^'+s;
    pb[0]=1;
    for (int i=1;i<s.length();i++){
        sum[i]=sum[i-1]*13331+s[i];
        pb[i]=pb[i-1]*13331;
    }
    scanf("%lld",&m);
    while (m--){
        scanf("%lld%lld%lld%lld",&l1,&r1,&l2,&r2);
        if (hashing(l1,r1)==hashing(l2,r2)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}