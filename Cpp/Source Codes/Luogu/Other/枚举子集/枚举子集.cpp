#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a[105];
char b[1005];
int n,x;
inline void dfs(int k){
	if (k>n){
		for (register int i=1;i<=n;i++){
			printf("%c",b[i]);
		}
		printf("\n");
		return;
	}
	for (register int i=0;i<=1;i++){
		b[k]=(i==0 ? 'N' : 'Y');
		dfs(k+1);
	}
}
signed main(){
	scanf("%lld",&n);
	dfs(1);
	return 0;
}

