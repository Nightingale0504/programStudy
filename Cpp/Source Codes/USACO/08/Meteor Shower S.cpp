#include<bits/stdc++.h> 
using namespace std;
#define int long long
#define MIN(a,b,c) if (a>=0 && b>=0) death[a][b]=min(death[a][b],c)
const int maxN=310,maxM=1e5;
struct coord{
	int x,y;
};
queue<coord> Q;
int ans[maxN][maxN],death[maxN][maxN];
int pos[4][2]={ {0,1},{1,0},{-1,0},{0,-1} };
int m,Ans=maxM;
int x,y,t,ux,uy;
signed main(){
	memset(ans,-1,sizeof(ans));
	memset(death,0x7f,sizeof(death));
	scanf("%lld",&m);
	for (int i=1;i<=m;i++){
		scanf("%lld%lld%lld",&x,&y,&t);
		MIN(x,y,t);
		for (int j=0;j<4;j++){
			MIN(x+pos[j][0],y+pos[j][1],t);
		}
	}
	Q.push((coord){0,0});
	ans[0][0]=0;
	while (!Q.empty()){
		coord u=Q.front();
		ux=u.x;
		uy=u.y;
		Q.pop();
		for (int j=0;j<4;j++){
			x=ux+pos[j][0];
			y=uy+pos[j][1];
			if (x<0 || y<0 || ans[x][y]!=-1 || ans[ux][uy]+1>=death[x][y]){
				continue;
			}
			ans[x][y]=ans[ux][uy]+1;
			Q.push((coord){x,y});
		}
	}
	for (int i=0;i<=305;i++){
		for (int j=0;j<=305;j++){
			if (death[i][j]>1e3 && ans[i][j]!=-1){
				Ans=min(Ans,ans[i][j]);
			}
		}
	}
	if (Ans==maxM){
		puts("-1");
	}else{
		printf("%lld",Ans);
	}
	return 0;
}

