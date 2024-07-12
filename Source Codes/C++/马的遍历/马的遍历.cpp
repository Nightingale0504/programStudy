#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxN=405;
int n,m,ans[maxN][maxN];
int x,y,tmpX,tmpY,newX,newY;
struct node{
	int x,y,step;
};
queue<node> que;
int f[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-2,1},{-2,-1},{-1,-2}};
signed main(){
	scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			ans[i][j]=-1;
		}
	}
	node a={x,y,0};
	que.push(a);
	ans[x][y]=0;
	while (!que.empty()){
		tmpX=que.front().x;
		tmpY=que.front().y;
		for (int i=0;i<8;i++){
			newX=tmpX+f[i][0];
			newY=tmpY+f[i][1];
			if (newX>=1 && newX<=n && newY>=1 && newY<=m && ans[newX][newY]==-1){
				a={newX,newY,que.front().step+1};
				que.push(a);
				ans[newX][newY]=que.front().step+1;
			}
		}
		que.pop();
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			printf("%lld ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

