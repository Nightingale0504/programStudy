#include<bits/stdc++.h> 
using namespace std;
struct Node{
	int x,y;
	int step;
};
queue<Node> que;
int f[12][2]={ { 2,2 },{ 2,-2 },{ -2,2 },{ -2,-2 } , 
			   { 1,2 },{ 1,-2 },{ -1,2 },{ -1,-2 } , 
			   { 2,1 },{ 2,-1 },{ -2,1 },{ -2,-1 } 
			};
int book[105][105];
int ex1,ey1,ex2,ey2;
int answerStorage[2];
bool flag1,flag2;
Node a;
int main(){
	scanf("%d%d%d%d",&ex1,&ey1,&ex2,&ey2);
	a={ 1,1,0 };
	book[1][1]=1;
	que.push(a);
	while (!que.empty()){
		for (int i=0;i<12;i++){
			int newX=que.front().x+f[i][0];
			int newY=que.front().y+f[i][1];
			int newStep=que.front().step+1;
			if (newX<1 || newX>100 || newY<1 || newY>100){
				continue;
			}
			if (book[newX][newY]==0){
				book[newX][newY]=1;
				a={ newX,newY,newStep };
				que.push(a);
				if (newX==ex1 && newY==ey1 && flag1==false){
					flag1=true;
					answerStorage[0]=newStep;
				}
				if (newX==ex2 && newY==ey2 && flag2==false){
					flag2=true;
					answerStorage[1]=newStep;
				}
				if (flag1==true && flag2==true){
					printf("%d\n%d",answerStorage[0],answerStorage[1]);
					return 0;
				}
			}
		}
		que.pop();
	}
	return 0;
}

