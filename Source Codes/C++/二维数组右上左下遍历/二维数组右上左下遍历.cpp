#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int row,col;
	scanf("%d%d",&row,&col);
	int array[row+1][col+1]; 
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			scanf("%d",&array[i][j]);
		}
	}
	for (int k=2;k<=row+col;k++){
		for (int i=1;i<=row;i++){
			for (int j=col;j>=1;j--){
				if (i+j==k){
					printf("%d\n",array[i][j]);
				}
			}
		}
	}
	return 0;
}


