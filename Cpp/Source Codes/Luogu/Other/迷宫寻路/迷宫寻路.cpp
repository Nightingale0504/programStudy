#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;
int n,m;
int dx[4]={ -1,1,0,0 };
int dy[4]={ 0,0,-1,1 };
int book[105][105];
char a[105][105];
int solve,newX,newY;
void dfs(int x,int y){
	if (x==n && y==m){
		solve=1;
		return;
	}
	for (int i=0;i<4;i++){
		newX=x+dx[i];
		newY=y+dy[i];
		if (newX>=1 && newX<=n && newY>=1 && newY<=m && a[newX][newY]=='.' && book[newX][newY]==0){
			book[newX][newY]=1;
			dfs(newX,newY);
			book[newX][newY]=0;
		}
	}
	return;
}
int main(){
	
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	book[1][1]=1;
	dfs(1,1);
	printf("%s",solve==1?"Yes":"No");
	return 0;
}
