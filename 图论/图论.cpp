#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	// 图论
	// dotA <-> dotB ----- 无向图
	// 最简单存储方案 ----- 邻接矩阵
	// 定义二维数组:
		// dotA <-> dotB: map[A][B]=1,map[B][A]=1
		// dotA !(<->) dotB: map[A][B]=0,(map[B][A]=0)
	return 0;
}

