#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxN=105;
struct coord{
	int x,y,ans;
	void init(int a,int b,int c){
		this->x=a;
		this->y=b;
		this->ans=c;
	}
};
queue<coord> q;
int n,startX,startY,endX,endY;
int f[maxN][maxN];
bool book[maxN][maxN];
char c; 
int ans;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int bfs(){
	coord s;
	s.init(startX,startY,0);
	q.push(s);
	book[startX][startY]=false;
	while (!q.empty()){
		s=q.front();
		q.pop();
		for (int i=0;i<4;i++){
			coord newC;
			newC.init(s.x+dx[i],s.y+dy[i],s.ans+1);
			if (newC.x==endX && newC.y==endY){
				return newC.ans;
			}
			if (book[newC.x][newC.y] && f[newC.x][newC.y]!=f[s.x][s.y]){
				q.push(newC);
				book[newC.x][newC.y]=false;
			}
		}
	}
	return -1;
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf(" %c",&c);
			if (c=='A'){
				startX=i;
				startY=j;
			}
			if (c=='B'){
				endX=i;
				endY=j;
			}
			if (c=='+'){
				f[i][j]=1;
			}
			if (c=='-'){
				f[i][j]=-1;
			}
			book[i][j]=true;
		} 
	}
	ans=bfs();
	printf("%lld",ans);
	return 0;
}

