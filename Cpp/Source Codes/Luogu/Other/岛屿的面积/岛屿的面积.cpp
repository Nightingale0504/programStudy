#include<bits/stdc++.h> 
using namespace std;
struct Node{
	int x,y;
};
Node a;
queue<Node> que;
int f[4][2]={ { 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
int m,n,x,y;
int map[55][55],book[55][55],islandArea;
int main(){
	scanf("%d%d%d%d",&m,&n,&x,&y);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&map[i][j]);
		}
	}
	a={ x,y };
	que.push(a);
	book[x][y]=1;
	islandArea++;
	while (!que.empty()){
		for (int i=0;i<4;i++){
			int newX=que.front().x+f[i][0];
			int newY=que.front().y+f[i][1];
			if (map[newX][newY]==1 && book[newX][newY]==0 && newX>=1 && newX<=m && newY>=1 && newY<=n){
				a={ newX,newY };
				que.push(a);
				book[newX][newY]=1;
				islandArea++;
			}
		}
		que.pop(); 
	}
	printf("%d",islandArea);
	return 0;
}

