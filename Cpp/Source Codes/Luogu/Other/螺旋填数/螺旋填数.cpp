#include<bits/stdc++.h> 
using namespace std;
int a[1005][1005];
int dx[4]={ 0,1,0,-1 };
int dy[4]={ 1,0,-1,0 };
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int x=1,y=1,d=0;
	for (int i=1;i<=n*m;i++){
		if ((x+dx[d]>n || y+dy[d]>m || y+dy[d]<=0) || (a[x+dx[d]][y+dy[d]])){
			d=(d+1)%4;
		}
		a[x][y]=i;
		x+=dx[d];
		y+=dy[d];
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			printf("%d ",a[i][j]);
		}
		printf("%c",'\n');
	}
	return 0;
}


