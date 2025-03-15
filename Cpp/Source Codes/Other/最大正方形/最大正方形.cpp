#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=105;
int n,m,t,tmp,sum[maxN][maxN];
signed main(){
//	#ifndef ONLINE_JUDGE
//		freopen("nightingale.in","r",stdin);
//		freopen("nightingale.out","w",stdout);
//	#endif
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&t);
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+t;
		}
	}
	for (int len=min(n,m);len>=1;len--){
		for (int i=1;i+len-1<=n;i++){
			for (int j=1;j+len-1<=m;j++){
				tmp=sum[i+len-1][j+len-1]-sum[i-1][j+len-1]-sum[i+len-1][j-1]+sum[i-1][j-1];
				if (tmp==len*len){
					printf("%lld",len);
					return 0;
				}
			}
		}
	}
	return 0;
}

