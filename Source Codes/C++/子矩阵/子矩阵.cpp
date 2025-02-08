#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n,m,r,c,matrix[20][20];
int f[20][20],dis[20],delta[20][20];
int a[20];
bool b[20];
int ans=0x7fffffff;
void dp(){
	memset(f,0x7f,sizeof(f));
	memset(dis,0,sizeof(dis));
	memset(delta,0,sizeof(delta));
	for (int j=1;j<=m;j++){
		for (int i=1;i<=r-1;i++){
			dis[j]+=abs(matrix[a[i]][j]-matrix[a[i+1]][j]);
		}
	} 
	for (int i=1;i<=m-1;i++){
		for (int j=i+1;j<=m;j++){
			for (int k=1;k<=r;k++){
				delta[i][j]+=abs(matrix[a[k]][i]-matrix[a[k]][j]);
			}
		}
	}
	for (int i=1;i<=m;i++){
		f[i][1]=dis[i];
	}
	for (int i=1;i<=m;i++){
		for (int j=2;j<=min(i,c);j++){
			for (int k=j-1;k<=i-1;k++){
				f[i][j]=min(f[i][j],f[k][j-1]+dis[i]+delta[k][i]);
			}
		}
	}
	for (int i=c;i<=m;i++){
		ans=min(ans,f[i][c]);
	}
}
void dfs(int num){
	if (num==r+1){
		dp();
		return;
	}
	for (int i=1;i<=n;i++){
		if (!b[i] && a[num-1]<i){
			b[i]=true;
			a[num]=i;
			dfs(num+1);
			b[i]=false;
		}
	}
}
int main(){
	scanf("%d%d%d%d",&n,&m,&r,&c);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	dfs(1);
	printf("%d",ans);
	return 0;
}

