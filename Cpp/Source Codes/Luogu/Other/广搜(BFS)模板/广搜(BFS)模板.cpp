#include<bits/stdc++.h> 
#inlcude<queue>
struct Node{
	int x,y;
	int step;
};
queue<Node> que;
using namespace std;
void bfs(){
	������ ----- ����ǽṹ����� ----- �������x,y����Ͳ���step
	book[���.x][���.y]=1;
	while (!que.empty()){
		for (���׵ĸ�������){
			int newX ----- �ڶ���Ԫ�ص�x�����ϱ仯 
			int newY ----- �ڶ���Ԫ�ص�y�����ϱ仯 
			int newStep ----- �ڶ���Ԫ�ص�step������+1
			if (��Խ�� && ��ͨ· && û�ù�){
				book[newX][newY]=1;
				�����ṹ����� ----- ����newX,newY��newStep
				���
				if (����){
					...
				} 
			}
		}
		que.pop(); 
	} 
}
