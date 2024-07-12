#include<iostream>
#include<cstdio>
using namespace std;
int z[1005][1005]={{0}} 
int main(){
	int m,n,a,b,sum=0;
	scanf("%d%d%d%d",&m,&n,&a,&b);
	int x[a+1],y[a+1];
	for (int i=1;i<=a;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	for (int i=1;i<=a;i++){
		for (int j=x[i]-b;j<=x[i]+b;j++){
			for (int k=y[i]-b;k<=y[i]+b;k++){
				z[j][k]=1;
			}
		}
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			printf("%d%c",z[i][j],' ');
			if (z[i][j]==1){
				sum++;
			}
		}
		printf("%c",'\n');
	}
	printf("%d",sum-1);
	return 0;
}


