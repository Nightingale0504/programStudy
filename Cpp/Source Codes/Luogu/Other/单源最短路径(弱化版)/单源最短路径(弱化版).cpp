#include<bits/stdc++.h> 
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
	// Dijkstra �㷨
	for (int i=1;i<=n;i++){
		dis[i]=INT_MAX;
	}
	dis[s]=0;
	for (int j=1;j<=n;j++){ // �� n ���㶼���Ϊ�Ƶ�
		int mmin=INT_MAX;
		// 1.������û��ǵĵ����ҵ���Сֵ�����ҵ������±� u
		for (int i=1;i<=n;i++){
			if (book[i]==0 && dis[i]<mmin){
				mmin=dis[i];
				u=i;
			}
		}
		// 2.��ǻƵ㣬��������û��ǵĵ㣬���� dis ����
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

