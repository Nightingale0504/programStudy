#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 1005
int n,m,a[maxN][maxN];
int x1,x2,y1,y2;
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		for (int j=x1;j<=x2;j++){
			for (int k=y1;k<=y2;k++){
				a[j][k]++;
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

