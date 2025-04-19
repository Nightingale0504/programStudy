#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=55,maxG=1e9;
int n,m,g[maxN],c[maxN][maxN];
int cnt[maxN],r[maxN][maxN];
int index[maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=m;i++){
		scanf("%lld",&g[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&c[i][j]);
		}
	}
	for (int i=1;i<=n;i++){
		cnt[i]=maxG;
		for (int j=1;j<=m;j++){
			cnt[i]=min(cnt[i],c[i][j]/g[j]);
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			r[i][j]=c[i][j]-cnt[i]*g[j];
		}
	}
	for (int k=1;k<=m;k++){
		for (int i=1;i<=n;i++){
			index[i]=i;
		}
		for (int i=1;i<=n-1;i++){
			for (int j=1;j<=n-i;j++){
				int a=index[j],b=index[j+1];
				if (r[a][k]>r[b][k]){
					swap(index[j],index[j+1]);
				}
				if (r[a][k]==r[b][k]){
					if (cnt[a]<cnt[b]){
						swap(index[j],index[j+1]);
					}
					if (cnt[a]==cnt[b]){
						if (a>b){
							swap(index[j],index[j+1]);
						}
					}
				}
			} 
		}
		for (int i=1;i<=n;i++){
			printf("%lld ",index[i]);
		}
		printf("\n");
	}
	return 0;
}

