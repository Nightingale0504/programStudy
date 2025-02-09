#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,k;
int a[15],book[15];
inline void dfs(int x){
	if (x>k){
		for (register int i=1;i<=k;i++){
			printf("%lld ",a[i]);
		}
		printf("\n");
		return;
	}
	for (register int i=1;i<=n;i++){
		if (!book[i]){
			book[i]=1;
			a[x]=i;
			dfs(x+1);
			book[i]=0;
		}
	}
}
signed main(){
	scanf("%lld%lld",&n,&k);
	dfs(1);
	return 0;
}

