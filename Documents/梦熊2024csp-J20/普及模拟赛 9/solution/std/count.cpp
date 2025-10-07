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

1.��Сֵһ��������������
2.���յõ��Ľ��һ����ԭ���е�һ��������
3.a[i1],a[i2],a[i3],a[i4],a[i5] i1<i2<i3<i4<i5
a[i1+1],a[i1+2],a[i1+3],....,a[i2-1] ��Щ������ɾ����
a[i1+1],a[i1+2],a[i1+3],....,a[i2-1] �е���Сֵһ�������min(a[i1],a[i2])

��ѡ������[i1+1,i2-1] ����ЩԪ��ɾ��ֻʣһ�������µ�Ԫ��һ�������е���Сֵ

a[i1]  min(a[i1+1],a[i1+2],...,a[i2-1])  a[i2]   a[i3]





a[i1] x, y z, c   a[i2] a[i3]

dp[i]��ʾa[1],a[2],a[3],....,a[i]���������У��ж��ٸ�����ͨ�����Ҫ��õ��ĺϷ����У������һ��Ԫ��Ϊa[i] 

ö��a[i]����һ��Ԫ��  ������a[j]

�Ϸ��������һ��Ԫ����a[i]��ö����һ��Ԫ��a[j] 


a[i]     a[j] 
��ת�Ƶ��ҽ�����min(a[i+1],a[i+2],...,a[j-1])>min(a[i],a[j]) 
dp[i]     dp[j]
i�ܹ�ת�Ƶ�j�����ҽ���min(a[i],a[j])<min(a[i+1],a[i+2],a[i+3],...,a[j-1])

O(n^3)



O(n^2)

dp[i]   -> dp[j]
ö��i��ö��j������[i+1,j-1]�е���Сֵ��Ȼ�����ת�� 

��ά����f[l,r]��ʾl,r�е���Сֵ

f[l,r+1]=min(f[l,r],a[r+1]) 

O(n)
����ջ 

a[i]>a[j]

[i+1,j-1]�е�����Ԫ�ش���min(a[i],a[j])=a[j] 

[i,j-1]�е�����Ԫ�ض�Ҫ����a[j] 

�ҵ�a[j-1],a[j-2],...a[1]�е�һ������С��Ԫ�ؼ�����a[k]
dp[k+1],dp[k+2],...dp[i-1] ����ת�Ƶ�dp[i] 

�ҵ�k���λ�ã���������ǰ׺�Ϳ��ټ���һ������Ĵ� 



ά��һ��ջ��ÿ�β���һ��Ԫ�أ����ջ������Ԫ���ǵ��������� 

3,2,5,6,7,4,1

3,2

2��3С��2����3����
���Զ��ں��������Ԫ�ض��ԣ�ǰ���һ������С��Ԫ�ز�������3 

3 3ǰ��û�и�С�� 
2 2ǰ��û�и�С�� 
2,5  5ǰ���һ��С�Ĵ���2 
2,5,6  6ǰ���һ��С�Ĵ���5 
2,5,6,7  7ǰ���һ��С�Ĵ���6 
2,4 4ǰ���һ��С�Ĵ���2 
1  1ǰ��û�и�С�� 

a[i]<a[j]

min(a[i+1],a[i+2],...,a[j-1]) > a[i]

a[i]Ҫ��a[i+1],a[i+2],a[i+3],...,a[j]������Ԫ�ض�ҪС <->ö�ٵ�j��ʱ��,a[i]�����ڵ���ջ����


�������һ��a[x] x����[i+1,j-1]�ڵģ���ô��ʱ��a[x]�϶��ܰѵ���ջ���a[i]���� 


��ζ��a[i]һ���ڵ���ջ�� 

����Ҫ�Ե���ջ���ÿ��Ԫ�ص�DPֵ��� 

 



*/
