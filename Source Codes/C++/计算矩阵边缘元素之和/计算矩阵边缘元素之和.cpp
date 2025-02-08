#include<bits/stdc++.h>
using namespace std;
int main(){
	// part:define variables
	int m,n,result=0;
	int i,j;
	// part:enter m n
	cin>>m>>n; 
	// part:: define a
	int a[m][n];
	// part:enter m N column data
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	// part:calculation and the edge of the matrix element
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0||j==0||i==(m-1)||j==(n-1)){
				result+=a[i][j];
			}
		}
	}
	// part:output result
	cout<<result;
}
