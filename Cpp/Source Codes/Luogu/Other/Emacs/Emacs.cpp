#include<bits/stdc++.h> 
using namespace std;
#define maxN 105
char field[maxN][maxN];
int n,m,sum,newX,newY;
int dx[4]={ -1,1,0,0 };
int dy[4]={ 0,0,-1,1 };
void dfs(int x,int y){
	field[x][y]='.';
	for (int i=0;i<4;i++){
		newX=x+dx[i];
		newY=y+dy[i];
		if (newX>=1 && newX<=n && newY>=1 && newY<=m && field[newX][newY]=='*'){
			dfs(newX,newY);
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>field[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (field[i][j]=='*'){
				sum++;
				dfs(i,j);
			} 
		}
	}
	printf("%d",sum);
	return 0;
}

