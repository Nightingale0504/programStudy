#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a[10],n,m;
inline void dfs(int k){
    if (k>n){
        for (register int i=1;i<=n;i++){
			printf("%lld ",a[i]);
		}
		printf("\n");
        return;
    }
    for (register int i=1;i<=m;i++){
        a[k]=i;
        dfs(k+1);
    }
}
signed main(){
	scanf("%lld%lld",&n,&m);
	dfs(1);
	return 0;
}

