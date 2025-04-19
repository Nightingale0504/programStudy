#include<bits/stdc++.h>  
struct Node{
	int x,y;
};
using namespace std;
int f[4][2]={ { 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
Node a;
queue<Node> que;
int m,n,map[55][55],book[55][55];
int maxArea=-1,tempArea;
void bfs(int i,int j){
	
}
int main(){
	scanf("%d%d",&m,&n);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&map[i][j]);
		}
	}
	a={ 1,1 };
	que.push(a);
	book[1][1]=1;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			if (map[i][j]==1){
				tempArea=1;
				bfs(i,j);
			} 
			if (tempArea>maxArea){
				maxArea=tempArea;
			}
		}
	}
	printf("%d",maxArea);
	return 0;
}

