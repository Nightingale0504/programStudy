// LUOGU_RID: 140201373
#include <bits/stdc++.h>

const int mod = 998244353, inf = 1e9 + 7;

inline int add(int x, int y){
  return x + y >= mod ? x + y - mod : x + y;
}

int n, a[300005], f[300005];

int st[300005], tp, lm[300005], rm[300005], g[300005], s[300005];

inline int minus(int x, int y){
  return x < y ? x - y + mod : x - y;
}

struct Fenwick{
	int C[300005];
	inline int lowbit(int x){
		return x & -x;
	}
	inline int ask(int x){
    int r = 0;
    for(; x; x -= lowbit(x)) r = add(r, C[x]);
    return r;
  }
	inline void update(int x, int y){
    for(; x <= n; x += lowbit(x)) C[x] = add(C[x], y);
    return ;
  }
}tr;

void solve(){
  scanf("%d", &n);
  for(int i = 1; i <= n; ++i) scanf("%d", &a[i]);
  s[0] = f[0] = 1; st[tp = 0] = 0;
  for(int i = 1; i <= n; ++i){
    while(tp && a[i] < a[st[tp]]) --tp;
    lm[i] = st[tp];
    st[++tp] = i;
  }
  st[tp = 0] = n + 1;
  for(int i = n; i >= 1; --i){
    while(tp && a[i] < a[st[tp]]) --tp;
    rm[i] = st[tp];
    st[++tp] = i;
  }
  for(int i = 1; i <= n; ++i){
    if(lm[i] == 0) f[i] = s[i - 1];
    else {
      f[i] = minus(s[i - 1], s[lm[i]]);
      f[i] = add(f[i], g[lm[i]]);
    }
    s[i] = add(s[i - 1], f[i]);
    g[i] = add(g[lm[i]], f[i]);
  }
  int ans = 0;
  for(int i = 1; i <= n; ++i) if(rm[i] == n + 1) ans = add(ans, f[i]);
  printf("%d\n", ans);
  return ;
}

int main(){
  solve();
  return 0;
}
/*

2,4,1,3

[2,1]
[2,1,3]
[1]
[1,3]
[2,4,1,3]
[2,4,1]

1.最小值一定在最终序列中
2.最终得到的结果一定是原序列的一个子序列
3.a[i1],a[i2],a[i3],a[i4],a[i5] i1<i2<i3<i4<i5
a[i1+1],a[i1+2],a[i1+3],....,a[i2-1] 这些数都被删除了
a[i1+1],a[i1+2],a[i1+3],....,a[i2-1] 中的最小值一定会大于min(a[i1],a[i2])

先选择区间[i1+1,i2-1] 把这些元素删到只剩一个，留下的元素一定是其中的最小值

a[i1]  min(a[i1+1],a[i1+2],...,a[i2-1])  a[i2]   a[i3]





a[i1] x, y z, c   a[i2] a[i3]

dp[i]表示a[1],a[2],a[3],....,a[i]的子序列中，有多少个可以通过题干要求得到的合法序列，且最后一个元素为a[i] 

枚举a[i]的下一个元素  假设是a[j]

合法序列最后一个元素是a[i]，枚举下一个元素a[j] 


a[i]     a[j] 
能转移当且仅当，min(a[i+1],a[i+2],...,a[j-1])>min(a[i],a[j]) 
dp[i]     dp[j]
i能够转移到j，当且仅当min(a[i],a[j])<min(a[i+1],a[i+2],a[i+3],...,a[j-1])

O(n^3)



O(n^2)

dp[i]   -> dp[j]
枚举i，枚举j，计算[i+1,j-1]中的最小值，然后进行转移 

二维数组f[l,r]表示l,r中的最小值

f[l,r+1]=min(f[l,r],a[r+1]) 

O(n)
单调栈 

a[i]>a[j]

[i+1,j-1]中的所有元素大于min(a[i],a[j])=a[j] 

[i,j-1]中的所有元素都要大于a[j] 

找到a[j-1],a[j-2],...a[1]中第一个比我小的元素假设是a[k]
dp[k+1],dp[k+2],...dp[i-1] 都能转移到dp[i] 

找到k这个位置，可以利用前缀和快速计算一个区间的答案 



维护一个栈，每次插入一个元素，这个栈内所有元素是单调递增的 

3,2,5,6,7,4,1

3,2

2比3小，2又在3后面
所以对于后面的所有元素而言，前面第一个比我小的元素不可能是3 

3 3前面没有更小的 
2 2前面没有更小的 
2,5  5前面第一个小的答案是2 
2,5,6  6前面第一个小的答案是5 
2,5,6,7  7前面第一个小的答案是6 
2,4 4前面第一个小的答案是2 
1  1前面没有更小的 

a[i]<a[j]

min(a[i+1],a[i+2],...,a[j-1]) > a[i]

a[i]要比a[i+1],a[i+2],a[i+3],...,a[j]的所有元素都要小 <->枚举到j的时候,a[i]会留在单调栈里面


如果存在一个a[x] x是在[i+1,j-1]内的，那么这时候a[x]肯定能把单调栈里的a[i]弹出 


意味着a[i]一定在单调栈上 

我们要对单调栈里的每个元素的DP值求和 

 



*/
