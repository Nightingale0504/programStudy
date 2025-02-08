#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
#include<string>
using namespace std;
#define int long long
queue<int> que;
int n,m,a[105][105],book[105];
int p,q,sum;
void init(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld%lld",&p,&q);
		a[p][q]=a[q][p]=1;
	}
	return;
}
void dfs(int x){
	sum++;
	if (sum==1){
		printf("%lld",x);
	}else{
		printf("-%lld",x);
	}
	book[x]=1;
	if (sum==n){
		return;
	}
	for (int i=1;i<=n;i++){
		if (a[x][i]==1 && book[i]==0){
			dfs(i);
		}
	}
	return;
}
signed main(){
	init();
	for (int i=1;i<=n;i++){
		if (book[i]==0){
			dfs(i);
		}
	}
	printf("\n");
	memset(book,0,sizeof(book));
	for (int i=1;i<=n;i++){
		if (book[i]==1){
			continue;
		}
		book[i]=1;
		que.push(i);
		if (i==1){
			printf("%lld",i);
		}else{
			printf("-%lld",i);
		}
		while (!que.empty()){
			for (int j=1;j<=n;j++){
				if (a[que.front()][j]==1 && book[j]==0){
					printf("-%lld",j);
					book[j]=1;
					que.push(j);
				}
			}
			que.pop();
		}
	}
	return 0;
}

