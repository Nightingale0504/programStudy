#include<iostream>
#include<cstdio>
#include<algorithm>
#inlcude<queue>
struct Node{
	int x,y;
	int step;
};
queue<Node> que;
using namespace std;
void bfs(){
	起点入队 ----- 起点是结构体对象 ----- 包含起点x,y坐标和步数step
	book[起点.x][起点.y]=1;
	while (!que.empty()){
		for (队首的各个方向){
			int newX ----- 在队首元素的x基础上变化 
			int newY ----- 在队首元素的y基础上变化 
			int newStep ----- 在队首元素的step基础上+1
			if (不越界 && 是通路 && 没用过){
				book[newX][newY]=1;
				创建结构体对象 ----- 包含newX,newY和newStep
				入队
				if (特判){
					...
				} 
			}
		}
		que.pop(); 
	} 
}
