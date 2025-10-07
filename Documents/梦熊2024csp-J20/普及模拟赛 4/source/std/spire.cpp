#include<bits/stdc++.h>
using namespace std;
void solve() {
	long long n,x,k;
	scanf("%lld%lld%lld",&n,&x,&k);
	priority_queue<long long,vector<long long>,greater<long long> > pq;
	int ans=-1;
	for(int i=1; i<=n; i++) {
		long long in;
		scanf("%lld",&in);
		if(k) {
			k--;
			pq.push(in);
		} else if(pq.size() && pq.top()<in) {
			x-=pq.top();
			pq.pop();
			pq.push(in);
		} else {
			x-=in;
		}
		if(x<=0 && ans==-1) ans=i-1;
	}
	if(ans==-1) ans=n;
	printf("%d\n",ans);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) solve();
	return 0;
}
//怎么判定能否把n个敌人全部都干掉
//贪心->免疫k次伤害，所以免疫的伤害一定是最高的k次
//剩下的伤害之和假设是S，如果S>=m那么说明不可以全部干掉，否则说明可以全部干掉 
//判定的一个方式 
//O(nlogn)时间复杂度内判定能否把n个敌人全部干掉的一种方式
//二分->最优化的问题变成一个判定性问题
//前mid轮个敌人全部解决掉，套用一开始的判定性的做法看是否可行，O(n*logn*logn) 
//排序存在一个(log) 
//进行离散化，然后桶排  O(nlogn)

//不依赖于二分，直接做 O(nlogn)
//priority_queue优先队列 堆 可重
//set不可重 
//multiset可重 
//O(logn) 插入一个元素
//O(1)返回最小/最大一个元素
//O(1)把最小或者最大的元素删除掉
 
 
