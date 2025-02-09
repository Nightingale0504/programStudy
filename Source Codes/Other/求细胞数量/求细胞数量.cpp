#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 105
int n,m,cellMap[maxN][maxN],cellNum;
int dx[4]={ -1,1,0,0 };
int dy[4]={ 0,0,-1,1 };
int newX,newY;
void dfs(int x,int y){
	cellMap[x][y]=0;
	for (int i=0;i<4;i++){
		newX=x+dx[i];
		newY=y+dy[i];
		if (newX>=1 && newX<=n && newY>=1 && newY<=m && cellMap[newX][newY]>0){
			dfs(newX,newY);
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%1d",&cellMap[i][j]);
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (cellMap[i][j]>0){
				cellNum++;
				dfs(i,j);
			}
		}
	}
	printf("%d",cellNum);
	return 0;
}

