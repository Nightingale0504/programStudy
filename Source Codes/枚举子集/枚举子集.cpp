#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a[105];
char b[1005];
int n,x;
void dfs(int k){
	if (k==n){
		for (int i=0;i<x;i++){
			printf("%c",b[i]);
		}
		printf("\n");
		return;
	}
	b[x++]='N';
	dfs(k+1);
	x--;
	b[x++]='Y';
	dfs(k+1);
	x--;
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	dfs(0);
	return 0;
}

