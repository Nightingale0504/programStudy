#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,a[105][105],ans;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	ans=n*m;
	printf("%lld",ans);
	return 0;
}

