#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,a[1005][1005];
int f(int x,int y){ // �ݹ� 
	if (x==1 || y==1){
		return 1;
	}
	return f(x-1,y)+f(x,y-1);
} 
signed main(){
	scanf("%lld%lld",&m,&n);
	for (int i=2;i<=n;i++){
		a[1][i]=1;
	}
	for (int i=2;i<=m;i++){
		a[i][1]=1;
	}
	for (int i=2;i<=m;i++){
		for (int j=2;j<=n;j++){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	int ans=a[m][n];
	printf("%lld",ans);
	return 0;
}

