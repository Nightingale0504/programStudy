#include<bits/stdc++.h>
using namespace std;
int n,m,map[105][105],book[105],answerStorage[105],tx,ty;
string cl="->";
struct Node{
	int cityID,preCityID;
}; 
queue<Node> que;
Node a;
void bfs(){
	book[1]=1;
	a={ 1,0 };
	que.push(a);
	while (!que.empty()){
		for (int i=1;i<=n;i++){
			if (map[que.front().cityID][i]==1 && book[i]==0){
				book[i]=1;
				a={ i,que.front().cityID };
				que.push(a);
				if (i==n){
					
				}
			}
		}
		que.pop();
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++){
		scanf("%d%d",&tx,&ty);
		map[tx][ty]=1;
		map[ty][tx]=1;
	}
	bfs();
	return 0;
}

