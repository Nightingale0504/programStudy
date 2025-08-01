#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,x,y;
int a[maxN][maxN];
vector<int> v[maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld%lld",&x,&y);
		a[x][y]=a[y][x]=1;
		v[x].push_back(y);
		v[y].push_back(x);	
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	for (int i=1;i<=n;i++){
		printf("%lld ",v[i].size());
		sort(v[i].begin(),v[i].end());
		for (int j=0;j<v[i].size();j++){
			printf("%lld ",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}

