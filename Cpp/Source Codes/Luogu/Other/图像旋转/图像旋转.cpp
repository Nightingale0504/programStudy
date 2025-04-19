#include<bits/stdc++.h> 
using namespace std;
int n,m,a[105][105];
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=m;i++){
		for (int j=n;j>=1;j--){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}

