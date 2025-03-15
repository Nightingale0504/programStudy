#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
int a[15][15];
int pos[4][2]={0,1,1,0,0,-1,-1,0};
int main(){
	int n=read(),x=1,y=1,d=0;
	for(int i=1;i<=n*n;i++){
		a[x][y]=i;
		int tx=x+pos[d][0],ty=y+pos[d][1];
		if(tx<1||tx>n||ty<1||ty>n||a[tx][ty]) d=(d+1)%4;
		x+=pos[d][0],y+=pos[d][1];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) printf("%3d",a[i][j]);
		if(i<n) printf("\n");
	}
	return 0;
}

