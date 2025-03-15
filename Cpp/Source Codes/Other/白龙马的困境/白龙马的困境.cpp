#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue> 
#include<cstring>
#include<string.h>
using namespace std;
struct Node{
	int x,y;
	int step;
};
int book[55][55],answerStorage[55][55];
int f[8][2]={ { 1,2 },{ 1,-2 },{ -1,2 },{ -1,-2 },
			  { 2,1 },{ 2,-1 },{ -2,1 },{ -2,-1 } 
			};
int m,n,x,y,newX,newY,newStep;
queue<Node> que;
Node a;
int main(){
	scanf("%d%d%d%d",&m,&n,&x,&y);
	memset(answerStorage,-1,sizeof(answerStorage));
	a={ x,y,0 };
	que.push(a);
	book[x][y]=1;
	answerStorage[x][y]=0;
	while (!que.empty()){
		for (int i=0;i<8;i++){
			newX=que.front().x+f[i][0];
			newY=que.front().y+f[i][1];
			newStep=que.front().step+1;
			if (book[newX][newY]==0 && newX>=1 && newX<=m && newY>=1 && newY<=m){
				answerStorage[newX][newY]=newStep;
				a={ newX,newY,newStep };
				que.push(a);
				book[newX][newY]=1;
			}
		}
		que.pop();
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			printf("%d ",answerStorage[i][j]);
		}
		printf("\n");
	}
	return 0;
}

