#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
#define llmax LONG_LONG_MAX
int map[1005][1005],book[1005][1005];
int m,n,mmin=llmax,sum;
int f[2][2]={ { 1,0 },{ 0,1 } };
void dfs(int x,int y){
	if (x==m && y==n){
		mmin=min(mmin,sum);
		return;
	}
	for (int i=0;i<2;i++){
		int newX=x+f[i][0];
		int newY=y+f[i][1];
		if (newX>=0 && newX<m && newY>=0 && newY<n && book[newX][newY]==0){
			book[newX][newY]=1;
			sum+=map[newX][newY];
			dfs(newX,newY);
			book[newX][newY]=0;
			sum-=map[newX][newY];
		}
	}
	return;
}
signed main(){
	scanf("%lld%lld",&m,&n);
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf("%lld",&map[i][j]);
		}
	}
	book[1][1]=1;
	sum=map[0][0];
	dfs(1,1);
	printf("%lld",mmin);
	return 0;
}

