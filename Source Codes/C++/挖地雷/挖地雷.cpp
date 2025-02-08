#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 201
#define f(x) for(register int i=1;i<=x;i++)
bool rd[maxN][maxN];
int a[maxN],dp[maxN],p[maxN],pos;
void dfs(int x){
	if (p[x]){
		dfs(p[x]);
	}
	printf("%d ",x);
}
int main(){
	int n,ans=0;
	cin>>n;
	f (n){
		scanf("%d",&a[i]);
	}
	f (n-1){
		for (register int j=i+1;j<=n;++j){
			scanf("%d",&rd[i][j]);
		}
	}
	dp[1]=a[1];//��ʼ��
	for (register int i=2;i<=n;++i){
		dp[i]=a[i];//��ʼ��
		for (register int j=i-1;j>0;--j){
			if (rd[j][i]&&dp[i]<dp[j]+a[i]){
				dp[i]=dp[j]+a[i];
				p[i]=j;
			}
		}
		if (ans<dp[i]){
			 ans=dp[i];
			 pos=i;
		}
	}
	dfs(pos);
	printf("\n%d",ans);
	return 0;
}

