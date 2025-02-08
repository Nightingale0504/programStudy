#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,g[40][40],x,y;
int main(){
	scanf("%d",&n);
	g[1][n/2+1]=1;
	x=1;
	y=n/2+1;
	for (int i=2;i<=n*n;i++){
		if (x==1 && y!=n){
			g[n][y+1]=i,x=n,y++;
		}else if (y==n && x!=1){
			g[x-1][1]=i,x--,y=1;
		}else if (x==1 && y==n){
			g[2][n]=i,x=2;
		}else if (x!=1 && y!=n){
			if (g[x-1][y+1]==0){
				g[x-1][y+1]=i,x--,y++;
			}else{
				g[x+1][y]=i,x++;
			}
			continue;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			printf("%d ",g[i][j]);
		}
		printf("\n");
	}
	return 0;
}

