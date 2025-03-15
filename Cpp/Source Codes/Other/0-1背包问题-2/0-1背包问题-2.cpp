#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int v[5]={ 0,3,4,5,6 };
int w[5]={ 0,2,3,4,5 };
int dp[5][9];
int object[5];
void dynamic(){
	for (int i=1;i<5;i++){
		for (int j=1;j<9;j++){
			if (j<w[i]){
				dp[i][j]=dp[i-1][j];
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);  
			}
		}
	}
}
void findItem(int i,int j){
	if (i==0){
		for (int i=0;i<5;i++){
			if (object[i]==1){
				printf("%d ",i);
			}
		}
		return;
	}
	if (dp[i][j]==dp[i-1][j]){
		object[i]=0;
		findItem(i-1,j);
	}else if (dp[i][j]==dp[i-1][j-w[i]]+v[i]){
		object[i]=1;
		findItem(i-1,j-w[i]);
	}
}
int main(){
	memset(dp,0,sizeof(dp));
	memset(object,0,sizeof(object));
	dynamic();
	for (int i=0;i<5;i++){
		for (int j=0;j<9;j++){
			printf("%d ",dp[i][j]);
		}
		puts(" ");
	}
	findItem(4,8);
	return 0;
}

