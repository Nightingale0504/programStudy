#include<bits/stdc++.h> 
using namespace std;
int f[4][2]={ { 0,1 },{ 0,-1 },{ 1,0 },{ -1,0 } };
int m,n,t,sx,sy,ex,ey,ans=INT_MAX;
char map[205][205],book[205][205];
bool flag;
void dfs(int x,int y,int step,int equipment){
	if (step>=ans) return;
	if (x==ex && y==ey){
		flag=true;
		ans=min(ans,step);
		return;
	}
	for (int i=0;i<4;i++){
		int newX=x+f[i][0];
		int newY=y+f[i][1];
		if (newX<1 || newX>m || newY<1 || newY>n) continue;
		if (book[newX][newY]==1) continue;
		if (map[newX][newY]=='*' && equipment>=0){
			book[newX][newY]=1;
			dfs(newX,newY,step+1,equipment);
			book[newX][newY]=0;
		}
		if (map[newX][newY]=='#' && equipment>0){
			book[newX][newY]=1;
			dfs(newX,newY,step+1,equipment-1);
			book[newX][newY]=0;
		}
	}
}
int main(){

	scanf("%d%d%d",&m,&n,&t);
	scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cin>>map[i][j];
		}
	}
	book[sx][sy]=1;
	dfs(sx,sy,0,t);
	printf("%d",flag ? ans:-1);
	return 0;
}

