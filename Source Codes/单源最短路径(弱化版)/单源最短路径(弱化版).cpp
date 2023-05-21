#include<iostream>
#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
#define int long long
int n,m,s,u=0;
int a[10005][10005],p,q,r;
int dis[10005];
int book[10005];
signed main(){
	scanf("%lld%lld%lld",&n,&m,&s);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			i==j ? a[i][j]=0 : a[i][j]=INT_MAX;
		}
	}
	while (m--){
		scanf("%lld%lld%lld",&p,&q,&r);
		a[p][q]=min(a[p][q],r);
	}
	// Dijkstra 算法
	for (int i=1;i<=n;i++){
		dis[i]=INT_MAX;
	}
	dis[s]=0;
	for (int j=1;j<=n;j++){ // 把 n 个点都标记为黄点
		int mmin=INT_MAX;
		// 1.从所有没标记的点中找到最小值，并找到它的下标 u
		for (int i=1;i<=n;i++){
			if (book[i]==0 && dis[i]<mmin){
				mmin=dis[i];
				u=i;
			}
		}
		// 2.标记黄点，找相邻且没标记的点，更新 dis 数组
		book[u]=1;
		for (int i=1;i<=n;i++){
			if (book[i]==0 && a[u][i]!=INT_MAX){
				dis[i]=min(dis[i],dis[u]+a[u][i]);
			}
		}
	}
	for (int i=1;i<=n;i++){
		printf("%lld ",dis[i]);
	}
	return 0;
}

