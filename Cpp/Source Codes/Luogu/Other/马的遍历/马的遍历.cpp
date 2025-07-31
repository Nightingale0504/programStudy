#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=405;
int n,m,x,y,ans[maxN][maxN];
int dx[8]={1,1,-1,-1,2,2,-2,-2};
int dy[8]={2,-2,2,-2,1,-1,1,-1};
struct node{
	int x,y,step;
};
queue<node> que;
signed main(){
	scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			ans[i][j]=-1;
		}
	}
	node t={x,y,0};
	que.push(t);
	ans[x][y]=0;
	while (!que.empty()){
		int x=que.front().x;
		int y=que.front().y;
		int step=que.front().step;
		que.pop();
		for (int i=0;i<8;i++){
			int newX=x+dx[i];
			int newY=y+dy[i];
			if (newX<1 || newX>n || newY<1 || newY>m){
				continue;
			}
			if (ans[newX][newY]==-1){
				t={newX,newY,step+1};
				que.push(t);
				ans[newX][newY]=step+1;
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			printf("%lld ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

