#include<bits/stdc++.h> 
using namespace std;
char maze[30][30];
int area=0;
int w,h;
void dfs(int r,int c){
	if (r<0 || c<0 || r==h || c==w){
		return;
	}
	if (maze[r][c]=='#'){
		return;
	}
	++area;
	maze[r][c]='#';
	dfs(r+1,c);
	dfs(r-1,c);
	dfs(r,c+1);
	dfs(r,c-1);
}
int main(){
	while (1){
		scanf("%d%d",&w,&h);
		if (w==0 && h==0){
			break;
		}
		area=0;
		int sr,sc;
		for (int i=0;i<h;i++){
			for (int j=0;j<w;j++){
				scanf("%c",&maze[i][j]);
				if (maze[i][j]=='@'){
					sr=i;
					sc=j;
				}
			}
		}
		dfs(sr,sc);
		printf("%d\n",area);
	}
	return 0;
}