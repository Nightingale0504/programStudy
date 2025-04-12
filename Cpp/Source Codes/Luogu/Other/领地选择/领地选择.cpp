#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,k,t,tmp,sum[maxN][maxN];
int mmax=INT_MIN,x,y;
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&t);
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+t;
		}
	}
	for (int i=1;i+k-1<=n;i++){
		for (int j=1;j+k-1<=m;j++){
			tmp=sum[i+k-1][j+k-1]-sum[i-1][j+k-1]-sum[i+k-1][j-1]+sum[i-1][j-1];
			if (tmp>mmax){
				mmax=tmp;
				x=i;
				y=j;
			}
		}
	}
	printf("%lld %ld",x,y);
	return 0;
}

