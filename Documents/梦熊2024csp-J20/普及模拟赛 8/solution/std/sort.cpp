#include<bits/stdc++.h>
using namespace std;
int t,n,a[2000005],id[2000005];
set<int>s1,s2;
bool cmp(int x,int y){
	return a[x]<a[y];
} 
inline void solve(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	long long res=0;
	for(int i=2;i<=n;i++)res+=1ll*(i-1)*(n-i+1);
	for(int i=0;i<=n+1;i++)s1.insert(i);
	s2.insert(0);
	s2.insert(n+1);
	for(int i=1;i<=n;i++)id[i]=i;
	sort(id+1,id+n+1,cmp);
	for(int i=1;i<=n;i++){
		int b=id[i];
		int a=*(--s1.lower_bound(b)),c=*s1.upper_bound(b);
		if(c!=n+1){
			int d=*s2.upper_bound(c);
			res-=1ll*(b-a)*(d-c);
		}
		s1.erase(b),s2.insert(b);
	}
	cout<<res<<endl;
}
signed main(){
	solve();
	return 0;
}
/*
1.多个区间进行操作
[l1,r1] [l2,r2]
这两个区间不可能相交
[1,x] [x+1,y] [y+1,n]
(n-1)-(x+1-x) -(y+1-y)

x-1+y-(x+1)+n-(y+1)
n-3
|2,1|3|5,4|
1+0+1=2
(n-1)-2=5-1-2=2

|3,1,2|5,4|7,6|9,8|
2+1+1+1=5
(9-1)-3=9-1-3=5

代价(n-1)-(中间的划分个数) 

比如选择了区间 [l:r] 
因为区间不可能相交 
[1,l-1] 的这些元素永远不可能跑到[l,r]后面 
[r+1,n] 的这些元素永远不可能跑到[l,r]前面 

[1,x]的元素的最大值小于[x+1,n]的元素的最小值，那么画一条竖线
O(n^3)
a[1],a[2],...,a[n]
xxxx     | yyy
前面的最大值小于后面的最小值 
f[i]表示前i个元素的最大值
f[i]=max(f[i-1],a[i])

答案只和划分个数有关
原代价是所有划分区间的长度之和 
 
 
O(n^2)
竖线个数 

[l,r] 求解有多少个竖线？

[l,x]  [x+1,r]
前面的最大值小于后面的最小值
(i,j,k)
[i,j]的最大值小于[j+1,k]的最小值 
先枚举jO(n)
然后从大到小枚举i，计算所有[i,j]的最大值g[1],g[2],g[3],...,g[j]
g[x]表示[x,j]的最大值 
从小到大枚举k，计算所有[j+1,k]的最小值h[j+1],h[j+2],h[j+3],...,h[n]
h[x]表示[j+1,x]的最小值 
相当于计算有多少个g[i]<h[j]
1,2,3,4,....n
w[x]表示有多少个g[i]=x
q[x]表示有多少个h[j]=x
x<y   w[x]*q[y]权值之和  -> 前缀和优化  O(n)
O(n^2) 

O(nlogn) set

[i,j,k]
[i,j]的最大值小于[j+1,k]的最小值
我们枚举[i,j]的最大值为x 

枚举x 
y是x左侧第一个比我大的
i可以取y+1,y+2,...,x  i一共有(x-y)种可能 
z是x右侧第一个比我大的
j+1只能取z j是固定的 
t是z右侧第一个比x小的元素
k可以取j+1,j+2,j+3,...,t-1 一共有 (t-1-j) 种可能

对于一个x而言，合法的竖线一共有 (x-y)*(t-1-j)

set  查询前驱后继
比x小的所有元素中最大的是多少
比x大的所有元素中最小的是多少 
STL
x
怎么去求解y,z,t具体是多少 
O(logn)
把所有<=x的元素 全部放到set里面，x肯定也在里面 
 
把所有要问的询问从小到大排序
1,2,3,4,5,6,7,
插入一个x
进行一次询问 
把所有要问的从大到小排序
7，6，5，4，3，2，1 
插入一个x
进行一次询问 
*/
