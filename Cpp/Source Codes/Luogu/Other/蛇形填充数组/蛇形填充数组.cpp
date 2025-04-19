#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,x=1,sum=1;
	scanf("%d",&n);
	int a[n+1][n+1];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			a[i][j]=x;
			x++;
		}
	}
	for (int i=0;i<=2*n-2;i++){
		for (int j=i;j>=0;j--){
			if (j<n && i-j<n){
				if (i%2!=0){
					a[i-j][j]=sum++;
				}else{
					a[j][i-j]=sum++;
				}
			}
		}
	} 
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

