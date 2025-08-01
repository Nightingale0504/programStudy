#include<bits/stdc++.h>  
using namespace std;
int w,h,x,y,sum=0;
int dir[4][2]={ {1,0},{-1,0},{0,1},{0,-1} };
int a[100][100];
struct node{
	int x,y;
};
bool check(int x,int y){
	if (x>=1 && x<=w && y>=1 && y<=h){
		return 1;
	}else{
		return 0;
	}
}
void bfs(int x,int y){
	sum=1;
	queue<node>brick;
	node start,next;
	start.x=x,start.y=y;
	brick.push(start);
	while (!brick.empty()){
		start=brick.front();
		for (int i=0;i<4;i++){
			next.x=start.x+dir[i][0];
			next.y=start.y+dir[i][1];
			if (check(next.x,next.y) && a[next.x][next.y]=='.'){
				sum++;
				a[next.x][next.y]='#';
				brick.push(next);
			}
		}
		brick.pop();
	}
}
int dfs(int x,int y){
	a[x][y]='#';
	sum++;
	node start,next;
	start.x=x;
	start.y=y;
	for (int i=0;i<4;i++){
		next.x=start.x+dir[i][0];
		next.y=start.y+dir[i][1];
		if (check(next.x,next.y) && a[next.x][next.y]=='.'){
			dfs(next.x,next.y);
		}
	}
}
int main() {

	scanf("%d%d",&w,&h);
	for (int i=0;i<w;i++){
		for (int j=0;j<h;j++){
			scanf("%d",&a[i][j]);
			if (a[i][j]=='@'){
				x=i;
				y=j;
			}
		}
	}
	int bfsStartTime=time(0);
	bfs(x,y);
	int bfsEndTime=time(0);
	int bfsTime=bfsStartTime-bfsEndTime;
	printf("%d %s:%d",sum,"BFS Use Time",bfsTime);
	int dfsStartTime=time(0);
	dfs(x,y);
	int dfsEndTime=time(0);
	int dfsTime=dfsStartTime-dfsEndTime;
	printf("%d %s:%d",sum,"DFS Use Time",dfsTime);
	return 0;
}

