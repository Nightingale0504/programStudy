#include<bits/stdc++.h> 
using namespace std;
#define maxN 1005
char field[maxN][maxN];
int n,m,sum,newX,newY;
int dx[4]={ -1,1,0,0 };
int dy[4]={ 0,0,-1,1 };
void dfs(int x,int y){
	field[x][y]='.';
	for (int i=0;i<4;i++){
		newX=x+dx[i];
		newY=y+dy[i];
		if (newX>=1 && newX<=n && newY>=1 && newY<=m && field[newX][newY]=='#'){
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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int num=0;
			if (field[i][j]=='#') num++;
			if (field[i+1][j]=='#') num++;
			if (field[i][j+1]=='#') num++;
			if (field[i+1][j+1]=='#') num++;
			if (num==3){
				cout<<"Bad placement.";
				return 0;
			}
		} 
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (field[i][j]=='#'){
				sum++;
				dfs(i,j);
			} 
		}
	}
	printf("%s%d%s","There are ",sum," ships.");
	return 0;
}

