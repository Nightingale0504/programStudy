#include<bits/stdc++.h> 
using namespace std;
int dx[4]={ -1,1,0,0 },dy[4]={ 0,0,-1,1 },book[105][105],a[105][105];
int sx,sy,fx,fy,tx,ty,solve,n,m,t,newX,newY;
void dfs(int x,int y){
	if (x==fx && y==fy){
		solve++;
		return;
	}
	for (int i=0;i<4;i++){
		newX=x+dx[i],newY=y+dy[i];
		if (newX>=1 && newX<=n && newY>=1 && newY<=m && a[newX][newY]==0 && book[newX][newY]==0){
			book[x][y]=1;
			dfs(newX,newY);
			book[x][y]=0;
		}
	}
}
int main(){
	scanf("%d%d%d",&n,&m,&t);
	scanf("%d%d%d%d",&sx,&sy,&fx,&fy);
	while(t--){
		scanf("%d%d",&tx,&ty);
		a[tx][ty]=1;
	}
	book[sx][sy]=1;
	dfs(sx,sy);
	printf("%d",solve);
	return 0;
}
