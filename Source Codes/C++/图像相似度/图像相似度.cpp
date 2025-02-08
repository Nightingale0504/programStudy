#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,a[105][105],b[105][105];
float s=0,ans;
int main(){
	scanf("%d%d",&m,&n);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			if (a[i][j]==b[i][j]){
				s++;
			}
		}
	}
	ans=s/(n*m)*100;
	printf("%.2f",ans);
	return 0;
}

