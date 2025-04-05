#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m; 
struct material{
	int w,c;
}mat[maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<m;i++){
		scanf("%lld%lld",&mat[i].w,&mat[i].c);
	}
	
	return 0;
}

