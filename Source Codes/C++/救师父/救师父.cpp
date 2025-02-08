#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
struct Node{
	int x,y;
	int step;
};
int n,m,sx,sy,ex,ey; 
int map[1005][1005],book[1005][1005];
queue<Node> que;
Node a;
int f[4][2]={ { 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%d",&map[i][j]);
		}
	}
	scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
	a={ sx,sy,0 };
	book[sx][sy]=1;
	que.push(a);
	while (!que.empty()){
		for (int i=0;i<4;i++){
			int newX=que.front().x+f[i][0];
			int newY=que.front().y+f[i][1];
			int newStep=que.front().step+1;
			if (newX<1 || newX>n || newY<1 || newY>m){
				continue;
			}
			if (book[newX][newY]==0 && map[newX][newY]==0){
				a={ newX,newY,newStep };
				if (newX==ex && newY==ey){
					printf("%d",newStep);
					return 0;
				}
				book[newX][newY]=1;
				que.push(a);
			}
		}
		que.pop();
	}
	return 0;
}

