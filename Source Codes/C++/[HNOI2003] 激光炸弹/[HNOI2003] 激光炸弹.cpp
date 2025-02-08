#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=5e3+5;
int n,m,mmax=INT_MIN;
int x,y,k,a[maxN][maxN],sum[maxN][maxN];
signed main(){
	scanf("%lld%lld",&n,&m);
	while (n--){
		scanf("%lld%lld%lld",&x,&y,&k);
		a[x+1][y+1]+=k;
	}
	for (int i=1;i<=5001;i++){
		for (int j=1;j<=5001;j++){
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
	for (int i=1;i+m-1<=5001;i++){
		for (int j=1;j+m-1<=5001;j++){
			int tmp=sum[i+m-1][j+m-1]-sum[i+m-1][j-1]-sum[i-1][j+m-1]+sum[i-1][j-1];
			mmax=max(mmax,tmp);
		}
	}
	printf("%lld",mmax);
	return 0;
}

