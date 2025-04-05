#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e3+5;
int T,n,m,k,x,y,d,sum,book[maxN][maxN];
char a[maxN][maxN];
signed  main(){
	scanf("%lld",&T);
	while (T--){
		scanf("%lld%lld%lld",&n,&m,&k);
		scanf("%lld%lld%lld",&x,&y,&d);
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin>>a[i][j];
				book[i][j]=0;
			}
		}
		sum=1;
		book[x][y]=1;
		while (k--){
			if (d==0){
				if (y+1<=m && a[x][y+1]=='.'){
					y++;
				}else{
					d=(d+1)%4;
				}
			}else if (d==1){
				if (x+1<=n && a[x+1][y]=='.'){
					x++;
				}else{
					d=(d+1)%4;
				}
			}else if (d==2){
				if (y-1>=1 && a[x][y-1]=='.'){
					y--;
				}else{
					d=(d+1)%4;
				}
			}else if (d==3){
				if (x-1>=1 && a[x-1][y]=='.'){
					x--;
				}else{
					d=(d+1)%4;
				}
			}
			if (book[x][y]==0){
				sum++;
				book[x][y]=1;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}

