#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
queue<int>que;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int x=10;
	que.push(x); //插入数据 
	que.pop(); //删除队首元素 
	int n=que.front(); //查询队首元素 
	int m=que.back(); //查询队尾元素 
	int k=que.size(); //查询队列长度 
	bool l=que.empty(); //查询队列状态（为空/非空） 
	return 0;
}

